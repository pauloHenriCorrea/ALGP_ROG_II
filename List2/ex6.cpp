#include <stdio.h>

bool suffix(int a, int b);
int main() {
    int a = 0, b = 0;

    printf("INFORM THE VALUE OF A: ");
    scanf("%d", &a);

    printf("INFORM THE VALUE OF B: ");
    scanf("%d", &b);

    if (suffix(a, b)) {
        printf("SUFFIX!");
    } else {
        printf("IS NOT SUFFIX!");
    }
    return 0;
}
bool suffix(int a, int b) {
    int rest_a, rest_b;
    
    if(a >= b) {
        while(b > 0) {
            rest_a = a % 10;
            rest_b = b % 10;

            if (rest_a != rest_b) {
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