#include <stdio.h>

int main() {
    double n1, n2, inteira, resto;

    printf("Informe n1 e n2: \n");
    scanf("%lf %lf", &n1, &n2);

    while(n1 >= n2) {
        n1 -= n2;
        resto = n1;
        inteira ++;
    }
    printf("O resto é: %lf\nA divisão inteira é: %lf", resto, inteira);
    return 0;
}