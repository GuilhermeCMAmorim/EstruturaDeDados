#ifndef SELECAO_H
#define SELECAO_H

// Busca linear: retorna o k-ésimo menor elemento
int linear_search(int arr[], int n, int k);

// Quick Select: retorna o k-ésimo menor elemento
int quick_select(int arr[], int left, int right, int k);

#endif