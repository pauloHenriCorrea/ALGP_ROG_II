#include <stdio.h>

int main() {
    int n, i, sum = 0;
    double average;
    bool boolean = true;

    printf("ENTER A NUMBER: \n");

    for (i = 1; boolean; i++) {
        scanf("%d", &n);
        sum += n;

        if (n == 0)
            boolean = false;
    }

    average = sum / i;

    printf("THE SUM IS: %d\nTHE AVARAGE IS: %lf", sum, average);
}
