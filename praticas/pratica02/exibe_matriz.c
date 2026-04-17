#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matriz1lac() { // Matriz com apenas um laço (Mais lenta)
    int matriz[10][10];
    for (int k = 0; k < 100; k++) { 
        int i = k / 10;
        int j = k % 10;
        matriz[i][j] = i * 10 + j;
        printf("%d ", matriz[i][j]);
        if(j == 9) {
            printf("\n");
        }
    }
    return 0;
}

int matriz2lac() { // Matriz dois laços aninhados (Mais rápida)
    int matriz[10][10];
    for (int i = 0; i < 10; i++) { 
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = i * 10 + j;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main() {
    clock_t tempo_inicial, tempo_final;
    double duracao;
    tempo_inicial = clock();
    matriz1lac();
    tempo_final = clock();
    printf("\n");
    duracao = (double)(tempo_final - tempo_inicial)/ CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f\n", duracao);
    printf("\n");
    tempo_inicial = clock();
    matriz2lac();
    tempo_final = clock();
    printf("\n");
    duracao = (double)(tempo_final - tempo_inicial)/ CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f\n", duracao);

    return 0;
}