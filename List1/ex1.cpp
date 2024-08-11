#include <stdio.h>

int main(){
    double volume, raio, altura, PI = 3.14;

    printf("Informe o raio e altura respctivamente: \n");    
    scanf("%lf %lf", &raio, &altura);

    volume = PI * (raio * raio) * altura;

    printf("O volume é: %.2f", volume);
    return 0;
}