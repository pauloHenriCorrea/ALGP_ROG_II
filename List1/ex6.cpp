#include <stdio.h>

int main() {
    double n1, n2, entire, rest;

    printf("Informe n1 e n2: \n");
    scanf("%lf %lf", &n1, &n2);

    while(n1 >= n2) {
        n1 -= n2;
        rest = n1;
        entire ++;
    }
    printf("O resto é: %lf\nA divisão inteira é: %lf", rest, entire);
    return 0;
}