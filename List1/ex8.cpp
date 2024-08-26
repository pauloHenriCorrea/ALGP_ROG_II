#include <stdio.h>

int main() {
    int n, i;
    bool prime = true;

    printf("ENTER A NUMBER: ");
    scanf("%d", &n);

    if (n == 2) {
        printf("IS PRIME");
    } else if (n == 1 || n == 0) {
        printf("IS NOT PRIME");
    } else {
        for (i = 3; i < n; i += 2) {
            if (n % i == 0) {
                prime = false;
            }
        }
    }

    if (prime){
        printf("PRIME");
    } else {
        printf("IS NOT PRIME");
    }
}