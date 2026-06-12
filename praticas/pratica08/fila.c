#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct no_t {
    int valor;
    struct no_t *proximo;
} No;

struct fila_t {
    No *inicio;
    No *fim;
};

Fila* fila_criar() {
    Fila *fila = (Fila*) malloc(sizeof(Fila));

    if (fila != NULL) {
        fila->inicio = NULL;
        fila->fim = NULL;
    }

    return fila;
}

int fila_esta_vazia(Fila *fila) {
    return (fila->inicio == NULL);
}

void fila_enfileirar(Fila *fila, int valor) {
    No *novo = (No*) malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro ao alocar memoria.\n");
        return;
    }

    novo->valor = valor;
    novo->proximo = NULL;

    if (fila_esta_vazia(fila)) {
        fila->inicio = novo;
    } else {
        fila->fim->proximo = novo;
    }

    fila->fim = novo;
}

int fila_desenfileirar(Fila *fila) {
    if (fila_esta_vazia(fila)) {
        printf("Fila vazia.\n");
        return -1;
    }

    No *remover = fila->inicio;
    int valor = remover->valor;

    fila->inicio = remover->proximo;

    if (fila->inicio == NULL) {
        fila->fim = NULL;
    }

    free(remover);

    return valor;
}

int fila_inicio(Fila *fila) {
    if (fila_esta_vazia(fila)) {
        printf("Fila vazia.\n");
        return -1;
    }

    return fila->inicio->valor;
}

void fila_exibir(Fila *fila) {
    if (fila_esta_vazia(fila)) {
        printf("Fila vazia.\n");
        return;
    }

    No *aux = fila->inicio;

    printf("Fila: ");

    while (aux != NULL) {
        printf("%d ", aux->valor);
        aux = aux->proximo;
    }

    printf("\n");
}

void fila_destruir(Fila *fila) {
    while (!fila_esta_vazia(fila)) {
        fila_desenfileirar(fila);
    }

    free(fila);
}