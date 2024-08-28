#include <stdio.h>
#include <stdlib.h>


void troque(int &x ,int &y, int &c);
int main() {
    int x = 1, y = 2, z = 3;
    printf("O valor das variaveis anteriormente: \nX = %d\nY = %d\nZ = %d\n", x, y, z);
    troque(x, y, z);
    printf("O valor das variaveis depois da troca: \nX = %d\nY = %d\nZ = %d\n", x, y, z);

    return 0;
}

void troque(int &x ,int &y, int &z) {
    int aux;
    aux = x;
    x = y;
    y = z;
    z = aux;
}
