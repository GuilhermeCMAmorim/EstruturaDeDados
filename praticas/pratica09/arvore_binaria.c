
#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

No* criar_no(int valor) {
    No* novo = (No*) malloc(sizeof(No));

    if (novo != NULL) {
        novo->valor = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
    }

    return novo;
}

No* inserir_no(No* raiz, int valor) {

    if (raiz == NULL) {
        return criar_no(valor);
    }

    if (valor < raiz->valor) {
        raiz->esquerda = inserir_no(raiz->esquerda, valor);
    } else {
        raiz->direita = inserir_no(raiz->direita, valor);
    }

    return raiz;
}

void pre_ordem(No* raiz) {

    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        pre_ordem(raiz->esquerda);
        pre_ordem(raiz->direita);
    }
}

void em_ordem(No* raiz) {

    if (raiz != NULL) {
        em_ordem(raiz->esquerda);
        printf("%d ", raiz->valor);
        em_ordem(raiz->direita);
    }
}

void pos_ordem(No* raiz) {

    if (raiz != NULL) {
        pos_ordem(raiz->esquerda);
        pos_ordem(raiz->direita);
        printf("%d ", raiz->valor);
    }
}

void destruir_no(No* raiz) {

    if (raiz != NULL) {
        destruir_no(raiz->esquerda);
        destruir_no(raiz->direita);
        free(raiz);
    }
}


Arvore* arvore_criar() {

    Arvore* arvore = (Arvore*) malloc(sizeof(Arvore));

    if (arvore != NULL) {
        arvore->raiz = NULL;
    }

    return arvore;
}

void arvore_inserir(Arvore* arvore, int valor) {

    if (arvore != NULL) {
        arvore->raiz = inserir_no(arvore->raiz, valor);
    }
}

void arvore_exibir_pre_ordem(Arvore* arvore) {

    if (arvore != NULL) {
        pre_ordem(arvore->raiz);
        printf("\n");
    }
}

void arvore_exibir_em_ordem(Arvore* arvore) {

    if (arvore != NULL) {
        em_ordem(arvore->raiz);
        printf("\n");
    }
}

void arvore_exibir_pos_ordem(Arvore* arvore) {

    if (arvore != NULL) {
        pos_ordem(arvore->raiz);
        printf("\n");
    }
}

int arvore_esta_vazia(Arvore* arvore) {

    if (arvore == NULL || arvore->raiz == NULL) {
        return 1;
    }

    return 0;
}

void arvore_destruir(Arvore* arvore) {

    if (arvore != NULL) {
        destruir_no(arvore->raiz);
        free(arvore);
    }
}