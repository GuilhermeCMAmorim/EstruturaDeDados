#include <stdio.h>
#include "ordenacao.h"

void troca(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;

}

void bubble_sort(int v[], int n) 
{
    for (int i = 0; i < n - 1; i++) // n-1 vezes
    {
        for (int j = i + 1; j < n; j++) // n-1 vezes
        {
            if (v[i] > v[j])
            {
                troca(&v[i], &v[j]);
            }
        }
    }
}

void imprimir_vetor(int v[], int n) 
{
    printf("[");
    for(int i=0; i < n-1; i++) 
    {
        printf("%i, ", v[i]);
    }
    printf("%i]\n", v[n-1]);
}