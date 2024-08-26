#include <stdio.h>

int main() {
    double n1, n2, entire, rest;

    printf("ENTER NUMBER ONE AND NUMBER TWO: \n");
    scanf("%lf %lf", &n1, &n2);

    while(n1 >= n2) {
        n1 -= n2;
        rest = n1;
        entire ++;
    }
    printf("THE REST IS: %lf\nTHE ENTIRE DIVISION IS: %lf", rest, entire);
    return 0;
}