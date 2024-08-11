#include <stdio.h>

int main() {
    double velocidade, valor;

    printf("Informe a velocidade: \n");
    scanf("%lf", &velocidade);

    if (velocidade > 80.0) {
        valor = (velocidade - 80.0) * 5;
        printf("O valor a ser pago é: %.2f", valor);
    }

    return 0;
}