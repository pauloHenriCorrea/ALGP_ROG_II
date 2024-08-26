#include <stdio.h>

int main() {
    double n1, n2, n3, aux;

    printf("ENTER THREE NUMBERS: \n");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 > n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    if (n1 > n3) {
        aux = n1;
        n1 = n3;
        n3 = aux;
    }

    if (n2 > n3) {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    printf("THE GREATEST IS: %lf\nTHE SMALLEST IS: %lf",n1, n3);
}