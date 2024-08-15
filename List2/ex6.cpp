#include <stdio.h>

bool sufixo(int a, int b);
int main() {
    int a = 0, b = 0;

    printf("Informe o valor de A: ");
    scanf("%d", &a);

    printf("Informe o valor de B: ");
    scanf("%d", &b);

    if (sufixo(a, b)) {
        printf("Sufixo!");
    } else {
        printf("Não é sufixo!");
    }
    return 0;
}
bool sufixo(int a, int b) {
    int resto_a, resto_b;
    
    if(a >= b) {
        while(b > 0) {
            resto_a = a % 10;
            resto_b = b % 10;

            if (resto_a != resto_b) {
                return false;
            }
            a = a / 10;
            b = b /10;
        }
    } else {
        return false;
    }
    

    return true;
}