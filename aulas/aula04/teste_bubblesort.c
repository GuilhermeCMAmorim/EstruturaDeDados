#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

#define TAMANHO 10

int main()
{
    int vetor[TAMANHO] = {5, 11, 4, 1, 17, 8, 6, 47, 51, 2};

    printf("Vetor antes de ordenar\n");
    imprimir_vetor(vetor, TAMANHO);

    clock_t inicio = clock();
    bubble_sort(vetor, TAMANHO);
    clock_t termino = clock();
    float duracao = (float)(termino - inicio) / CLOCKS_PER_SEC;

    printf("Vetor depois de ordenar em %fs\n", duracao);
    imprimir_vetor(vetor, TAMANHO);
}

//Compilar: gcc *.c -lm -o a.out
//Executar: ./a.out
