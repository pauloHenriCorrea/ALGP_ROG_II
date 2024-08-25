#include <stdio.h>

int main() {
    double speed, value;

    printf("Informe a velocidade: \n");
    scanf("%lf", &speed);

    if (speed > 80.0) {
        value = (speed - 80.0) * 5;
        printf("O valor a ser pago é: %.2f", value);
    }

    return 0;
}