#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

typedef struct no_t {
    int valor;
    struct no_t *proximo;
} No;

struct hash_t {
    No **tabela;
    int tamanho;
};

static int funcao_hash(TabelaHash *hash, int valor) {
    return valor % hash->tamanho;
}

TabelaHash *hash_criar(int tamanho) {
    TabelaHash *hash = (TabelaHash *) malloc(sizeof(TabelaHash));

    hash->tamanho = tamanho;
    hash->tabela = (No **) malloc(tamanho * sizeof(No *));

    for (int i = 0; i < tamanho; i++) {
        hash->tabela[i] = NULL;
    }

    return hash;
}

void hash_inserir(TabelaHash *hash, int valor) {
    int indice = funcao_hash(hash, valor);

    No *novo = (No *) malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = hash->tabela[indice];

    hash->tabela[indice] = novo;
}

int hash_buscar(TabelaHash *hash, int valor) {
    int indice = funcao_hash(hash, valor);

    No *aux = hash->tabela[indice];

    while (aux != NULL) {
        if (aux->valor == valor) {
            return 1;
        }

        aux = aux->proximo;
    }

    return 0;
}

void hash_remover(TabelaHash *hash, int valor) {
    int indice = funcao_hash(hash, valor);

    No *atual = hash->tabela[indice];
    No *anterior = NULL;

    while (atual != NULL && atual->valor != valor) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == NULL) {
        return;
    }

    if (anterior == NULL) {
        hash->tabela[indice] = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }

    free(atual);
}

void hash_exibir(TabelaHash *hash) {
    for (int i = 0; i < hash->tamanho; i++) {
        printf("[%d]: ", i);

        No *aux = hash->tabela[i];

        while (aux != NULL) {
            printf("%d -> ", aux->valor);
            aux = aux->proximo;
        }

        printf("NULL\n");
    }
}

int hash_esta_vazia(TabelaHash *hash) {
    for (int i = 0; i < hash->tamanho; i++) {
        if (hash->tabela[i] != NULL) {
            return 0;
        }
    }

    return 1;
}

void hash_destruir(TabelaHash *hash) {
    for (int i = 0; i < hash->tamanho; i++) {
        No *aux = hash->tabela[i];

        while (aux != NULL) {
            No *temp = aux;
            aux = aux->proximo;
            free(temp);
        }
    }

    free(hash->tabela);
    free(hash);
}