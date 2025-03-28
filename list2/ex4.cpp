#include <stdio.h>
#define MAX 100

void imprimir(int m, int n, int c[MAX][MAX]);
void ler_dados(int m, int n, int mat[MAX][MAX]);
void somar(int m, int n, int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX]);

int main()
{
    int m, n, a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];

    scanf("%d %d", &m, &n);

    ler_dados(m, n, a);
    ler_dados(m, n, b);
    somar(m, n, a, b, c);
    imprimir(m, n, c);
}

void imprimir(int m, int n, int c[MAX][MAX])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

void ler_dados(int m, int n, int mat[MAX][MAX])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
}

void somar(int m, int n, int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
}