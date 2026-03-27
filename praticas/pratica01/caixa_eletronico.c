#include <stdio.h>

float saque(float valor) {
    if (valor > 1000.0) {
        printf("Erro: Valor de saque excedido!");
        return -1;
    }
    int resto = valor; // Caso valor = impar

    int n200 = resto / 200;
    resto %= 200;

    int n100 = resto / 100;
    resto %= 100;

    int n50 = resto / 50;
    resto %= 50;

    int n20 = resto / 20;
    resto %= 20;

    int n10 = resto / 10;
    resto %= 10;

    int n5 = resto / 5;
    resto %= 5;

    int n2 = resto / 2;
    resto %= 2;

    printf("Valor do saque: %d\n", valor);
    printf("Notas de 200: %d\n", n200);
    printf("Notas de 100: %d\n", n100);
    printf("Notas de 50: %d\n", n50);
    printf("Notas de 20: %d\n", n20);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 5: %d\n", n5);
    printf("Notas de 2: %d\n", n2);

    if (resto == 0) {
        printf("Valor restante não pode ser sacado!\n");
    }
    else {
        printf("Valor restante a ser sacado: %d\n", resto);
    }

}
int main()
{
    saque(230);

    return 0;
}