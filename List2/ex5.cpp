#include <stdio.h>

double calculate_area_sphere(double raio);

int main() {
    double ray, area;
    printf("Informe o raio: ");
    scanf("%lf", &ray);

    area = calculate_area_sphere(ray);
    printf("Área da esfera: %.2f", area);
    return 0;
}

double calculate_area_sphere(double raio) {
    return 3.14 * (raio * raio);
}