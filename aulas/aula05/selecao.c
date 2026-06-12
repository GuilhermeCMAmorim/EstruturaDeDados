#include <stdio.h>
#include "selecao.h"

int busca_sequencial(int v[], int n, int valor) {
    for (int i = 0; i < n; i++) { // O(n)
        if (v[i] == valor) {
            return i; // Retorna o índice onde o valor foi encontrado
        }
    }
    return -1; // Retorna -1 se o valor não for encontrado
}