#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selecao.h"

#define TAMANHO 1000000

int main() {
    clock_t inicio_tempo, final_tempo;
    int vetor[TAMANHO];

    printf("[");
    for(int i =0; i< TAMANHO; i++){
        vetor[i] = rand() % TAMANHO; // Preenche o vetor com números aleatórios
        printf("%i, ", vetor[i]);
    }
    printf("]\n");

    printf("Primeiro = %i, Ultimo = %i\n", vetor[0], vetor[TAMANHO-1]);

    int valor;
    printf("Entre com um numero para buscar: ");
    scanf("%i", &valor);

    inicio_tempo = clock();
    int achou = busca_sequencial(vetor, TAMANHO, valor);
    final_tempo = clock();

    double tempo_gasto = (double)(final_tempo - inicio_tempo) / CLOCKS_PER_SEC;
    

    if(achou != -1){
        printf("Valor encontrado na posicao: %i\n", achou);
    }else{
        printf("Valor nao encontrado\n");
    }
    printf("Tempo gasto: %f segundos\n", tempo_gasto);

    return 0;
}

// Copilar: gcc selecao.c testa_busca_sequencial.c -lm -o busca_sequencial.out
// Executar: ./busca_sequencial.out