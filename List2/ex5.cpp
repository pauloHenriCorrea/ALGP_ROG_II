#include <stdio.h>

double calculate_area_sphere(double radios);

int main() {
    double ray, area;
    printf("INFORM THE RADIUS: ");
    scanf("%lf", &ray);

    area = calculate_area_sphere(ray);
    printf("SPHERE AREA: %.2f", area);
    return 0;
}

double calculate_area_sphere(double radios) {
    return 3.14 * (radios * radios);
}