#include <stdio.h>

int main() {
    int n, i, sum = 0;
    double average;
    bool boolean = true;

    printf("Informe um número: \n");

    for (i = 1; boolean; i++) {
        scanf("%d", &n);
        sum += n;

        if (n == 0)
            boolean = false;
    }

    average = sum / i;

    printf("A soma é: %d\nA média é: %lf", sum, average);
}
