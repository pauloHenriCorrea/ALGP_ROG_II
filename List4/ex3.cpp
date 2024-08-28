#include <stdio.h>

int main() {
    int *p, *q, x, y;

    x = 2;
    y = 8;

    p = &x;
    q = &y;

    printf("O endereço de x: %p. O valor de x: %d\n", &x, x);
    printf("O valor de p: %p. O valor de *p: %p\n", p, *p);
    printf("O endereço de y: %p. O valor de y: %d\n", &y, y);
    printf("O endereço de p: %p\n", &p);


    return 0;
}