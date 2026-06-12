#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fatorecur(int num) { // Mais devagar
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * fatorecur(num - 1);
    }
}

int fato(int num) { // Mais rápido
    int resultado = 1;
    for (int i = 2; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num = 6;
    if (num < 0) {
        printf("Entrada inválida. Digite um número inteiro positivo.\n");
        return 1;
    }
    clock_t tempo_inicial, tempo_final;
    double duracao;
    printf("Calcular o fatorial de %d por recursão:\n", num);
    tempo_inicial = clock();
    printf("O fatorial de %d por recursão é %d.\n", num, fatorecur(num)); // Fatorial por Recursão
    tempo_final = clock();
    duracao = (double)(tempo_final - tempo_inicial)/ CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f\n", duracao);


    printf("\nCalcular o fatorial de %d por repetição:\n", num);
    tempo_inicial = clock();
    printf("O fatorial de %d por repetição é %d.\n", num, fato(num)); // Fatorial por Repetição
    tempo_final = clock();
    duracao = (double)(tempo_final - tempo_inicial)/ CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %.10f\n", duracao);

    return 0;
}