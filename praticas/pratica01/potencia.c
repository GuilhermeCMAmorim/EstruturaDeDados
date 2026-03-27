#include <stdio.h>


int main() { 
    int potencia = 0;
    float num = 8.0, resultado = 1;
    
    for (int i = 0; i<potencia; i++) {
        resultado *= num;
    }

    // Arquivo texto para salvar o resultado
    printf("O resultado da potência é: %.2f\n", resultado);
    
    return 0;
}