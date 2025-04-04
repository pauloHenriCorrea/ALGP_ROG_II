#include <stdio.h>
#define MAX 100

int crescente(int v[MAX], int tam);

int main()
{
    int v[MAX], n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    if (crescente(v, n) == 1)
        printf("verdadeiro");
    else
        printf("falso");
    return 0;
}

int crescente(int v[MAX], int tam)
{
    for (int i = 0; i < tam - 1; i++)
        if (v[i] >= v[i + 1])
            return -1;
    return 1;
}