#include <stdio.h>

int piso_log2(int n);

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", piso_log2(n));
    return 0;
}

int piso_log2(int n)
{
    int i = 0;
    while (n > 1) {
        n = n / 2;
        i++;
    }
    return i;
}