#include <stdio.h>
#include <stdlib.h>
#include "selecao.h"

// Função auxiliar para trocar elementos
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


// LINEAR SEARCH (seleção ingênua)

int linear_search(int arr[], int n, int k) {
    // Ordena o vetor (bubble sort simples)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    return arr[k - 1];
}


// PARTIÇÃO (Quick Select)

int partition(int arr[], int left, int right) {
    int pivot = arr[right];
    int i = left;

    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }

    swap(&arr[i], &arr[right]);
    return i;
}


// QUICK SELECT

int quick_select(int arr[], int left, int right, int k) {
    if (left <= right) {
        int pivotIndex = partition(arr, left, right);

        if (pivotIndex == k)
            return arr[pivotIndex];
        else if (pivotIndex > k)
            return quick_select(arr, left, pivotIndex - 1, k);
        else
            return quick_select(arr, pivotIndex + 1, right, k);
    }
    return -1;
}