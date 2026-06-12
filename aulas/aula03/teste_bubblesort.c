#include <stdio.h>
#include "ordenacao.h"

#define TAMANHO 10

int main()
{
    int vetor[TAMANHO] = {5, 11, 4, 1, 17, 8, 6, 47, 51, 2};

    printf("Vetor antes de ordenar\n");
    imprimir_vetor(vetor, TAMANHO);

    bubble_sort(vetor, TAMANHO);

    printf("Vetor depois de ordenar\n");
    imprimir_vetor(vetor, TAMANHO);
}