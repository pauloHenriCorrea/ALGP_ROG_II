#include <stdio.h>
#include <stdlib.h>


void troque1(int &x ,int &y);
int main() {
    int x = 2, y = 4, *p;
    printf("O valor das variaveis anteriormente: \nX = %d\nY = %d\n", x, y);
    troque1(x, y);
    printf("O valor das variaveis depois da troca: \nX = %d\nY = %d\n", x, y);

    return 0;
}

void troque1(int &x ,int &y) {
    int aux;
    aux = x;
    x = y;
    y = aux;
}
