#include <stdio.h>

int main() {
    int n, i;
    bool primo = true;

    printf("Informe um número: ");
    scanf("%d", &n);

    if (n == 2) {
        printf("PRIMO");
    } else if (n == 1 || n == 0) {
        printf("NÃO É PRIMO");
    } else {
        for (i = 3; i < n; i += 2) {
            if (n % i == 0) {
                primo = false;
            }
        }
    }

    if (primo){
        printf("PRIMO");
    } else {
        printf("NÃO É PRIMO");
    }
}