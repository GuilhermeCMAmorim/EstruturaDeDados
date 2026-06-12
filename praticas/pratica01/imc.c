#include <stdio.h>

float imc(float peso, float altura)
{
    if (peso <= 0 || altura <= 0) {
        printf("Erro: Peso e altura devem ser valores positivos.\n");
        return 1;
    }
    return peso / (altura*altura);
}

int main() {  
    float imc_result = imc(70, 1.75);
    printf("IMC: %.2f\n", imc_result);
    if (imc_result < 18.5) {
        printf("Abaixo do peso.\n");
    } else if (imc_result < 25) {
        printf("Peso normal.\n");
    } else if (imc_result < 30) {
        printf("Sobrepeso.\n");
    } else {
        printf("Obesidade.\n");
    }

    return 0;
}