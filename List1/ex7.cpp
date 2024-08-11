#include <stdio.h>

int main() {
    int n, i, soma = 0;
    double media;
    bool boleana = true;

    printf("Informe um número: \n");

    for (i = 1; boleana; i++) {
        scanf("%d", &n);
        soma += n;

        if (n == 0)
            boleana = false;
    }

    media = soma / i;

    printf("A soma é: %d\nA média é: %lf", soma, media);
}
