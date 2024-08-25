#include <stdio.h>

int main(){
    double volume, ray, height, PI = 3.14;

    printf("Informe o raio e altura respctivamente: \n");    
    scanf("%lf %lf", &ray, &height);

    volume = PI * (ray * ray) * height;

    printf("O volume é: %.2f", volume);
    return 0;
}