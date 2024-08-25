#include <stdio.h>

int main() {
    int n, i;
    bool prime = true;

    printf("Informe um número: ");
    scanf("%d", &n);

    if (n == 2) {
        printf("PRIMO");
    } else if (n == 1 || n == 0) {
        printf("NÃO É PRIMO");
    } else {
        for (i = 3; i < n; i += 2) {
            if (n % i == 0) {
                prime = false;
            }
        }
    }

    if (prime){
        printf("PRIMO");
    } else {
        printf("NÃO É PRIMO");
    }
}