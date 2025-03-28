#include <stdio.h>
#define MAX 100

bool maior(int n, int v[]);

int main()
{
    int n, int_v[MAX];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &int_v[i]);

    if (maior(n, int_v))
        printf("true");
    else
        printf("false");

    return 0;
}

bool maior(int n, int v[])
{
    for (int i = 1; i < n; i++)
        if (v[0] <= v[i])
            return false;
    return true;
}