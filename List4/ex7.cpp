#include <stdio.h>
#include <stdlib.h>


void troque2(int *x ,int *y);
int main() {
    int x = 2, y = 4;
    printf("O valor das variaveis anteriormente: \nX = %d\nY = %d\n", x, y);
    troque2(&x, &y);
    printf("O valor das variaveis depois da troca: \nX = %d\nY = %d\n", x, y);

    return 0;
}

void troque2(int *x ,int *y) {
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}
