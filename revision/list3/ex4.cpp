#include <stdio.h>

int maxfator(int n);

int main()
{
    int n, fator = 1;

    scanf("%d", &n);

    fator = maxfator(n);
    printf("%d %d", n, fator);
    return 0;
}

int maxfator(int n)
{
    int fator = 1;
    if(n < 0)
        n *= -1;
        
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            fator = i;
    return fator;
}