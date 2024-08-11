#include <stdio.h>

double calculoResidencial(double kWa);
double calculoIndustrial(double kWa);
double calculoComercial(double kWa);

int main() {
    double kWh, valor;
    char tipo;

    printf("Informe a quantidade de kWh consumida e o tipo de instalação: \n");
    scanf("%lf %c", &kWh, &tipo);

    printf("O valor a se pago é: %lf", valor);

    switch (tipo) {
        case 'R':
            valor = calculoResidencial(kWh);
            break;

        case 'I':
            valor = calculoIndustrial(kWh);
            break;

        case 'C':
            valor = calculoComercial(kWh);
            break;

        default:
            printf("ERROR");
            break;
    }
}

double calculoResidencial(double kWa) {
    if (kWa > 500.0) {
        return kWa * 0.65;
    } else {
        return kWa * 0.40;
    }
};

double calculoComercial(double kWa) {
    if (kWa > 1000.0) {
        return kWa * 0.60;
    } else {
        return kWa * 0.55;
    }
};

double calculoIndustrial(double kWa) {
    if (kWa > 5000.0) {
        return kWa * 0.55;
    } else {
        return kWa * 0.60;
    }
};