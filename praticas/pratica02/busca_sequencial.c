#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int busca(int n, int valor, int *vet) {
    if (n-1 < 0) { //  Valor não será encontrado se n-1 for menor que 0 (Pior caso)
        printf("O valor %d não foi encontrado no vetor.\n", valor);
        return 0;
    } else if (valor == vet[n-1]) { // Valor encontrado na posição n-1
        printf("O valor %d foi encontrado na posição vet[%d].\n", valor, n-1);
        return 0;
    } else { // Chamada recursiva para verificar o próximo elemento
        return busca(n-1, valor, vet);
    } // Se o valor for encontrado na última posição do vetor n-1 (melhor caso)
}

int main() {
    clock_t tempo_inicial = clock();
    int vet[100] = {
        532, 17, 894, 203, 76, 645, 998, 410, 59, 721,
        300, 12, 857, 499, 63, 940, 275, 801, 34, 688,
        150, 777, 421, 96, 555, 702, 18, 999, 264, 381,
        640, 73, 812, 456, 29, 901, 388, 120, 674, 247,
        530, 61, 845, 392, 711, 14, 962, 333, 587, 104,
        768, 215, 980, 43, 621, 352, 497, 806, 66, 274,
        915, 138, 720, 569, 82, 443, 658, 309, 744, 27,
        886, 190, 537, 418, 93, 672, 804, 256, 711, 35,
        960, 147, 520, 381, 699, 234, 78, 845, 412, 563,
        910, 299, 640, 51, 728, 167, 884, 346, 602, 19
    };
    busca(100, 845, vet);
    clock_t tempo_final = clock();
    double duracao = (double)(tempo_final - tempo_inicial)/ CLOCKS_PER_SEC;
    printf("o tempo de execucao foi %.10f\n", duracao);

    return 0;
}