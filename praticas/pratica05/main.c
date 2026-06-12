#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selecao.h"

#define TAM 100

int main() {
    int v1[TAM], v2[TAM];
    int k = 50; // exemplo: 50º menor elemento

    srand(time(NULL));

    // Gerar números aleatórios
    for (int i = 0; i < TAM; i++) {
        v1[i] = rand() % 1000;
        v2[i] = v1[i]; // copia para usar no outro algoritmo
    }

    clock_t inicio, fim;


    // Linear Search

    inicio = clock();
    int resultado1 = linear_search(v1, TAM, k);
    fim = clock();

    double tempo1 = (double)(fim - inicio) / CLOCKS_PER_SEC;

    
    // Quick Select
    
    inicio = clock();
    int resultado2 = quick_select(v2, 0, TAM - 1, k - 1);
    fim = clock();

    double tempo2 = (double)(fim - inicio) / CLOCKS_PER_SEC;

    
    // Resultados
    
    printf("Linear Search: %d | Tempo: %f segundos\n", resultado1, tempo1);
    printf("Quick Select: %d | Tempo: %f segundos\n", resultado2, tempo2);

    return 0;
}