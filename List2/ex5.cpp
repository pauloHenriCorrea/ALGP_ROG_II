#include <stdio.h>

double calcular_area_da_esfera(double raio);

int main() {
    double raio, area;
    printf("Informe o raio: ");
    scanf("%lf", &raio);

    area = calcular_area_da_esfera(raio);
    printf("Área da esfera: %.2f", area);
    return 0;
}

double calcular_area_da_esfera(double raio) {
    return 3.14 * (raio * raio);
}