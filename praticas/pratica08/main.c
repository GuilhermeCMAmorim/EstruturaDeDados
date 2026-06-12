#include <stdio.h>
#include "fila.h"

int main() {

    Fila *fila = fila_criar();
    fila_enfileirar(fila, 10);
    fila_enfileirar(fila, 20);
    fila_enfileirar(fila, 30);
    fila_exibir(fila);
    printf("Inicio da fila: %d\n", fila_inicio(fila));
    printf("Elemento removido: %d\n", fila_desenfileirar(fila));
    fila_exibir(fila);
    fila_enfileirar(fila, 40);
    fila_exibir(fila);
    fila_destruir(fila);

    return 0;
}