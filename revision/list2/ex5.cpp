#include <stdio.h>
#define MAX 10

int main()
{
    int m, n, a[MAX][MAX], b[MAX], c[MAX][MAX];

    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            c[i][1] += a[i][j] * b[j];

    for (int i = 0; i < m; i++)
        printf("%d ", c[i][1]);
    return 0;
}