#include <stdio.h>
#define MAX 100

bool crescente(int n, int v[]);

int main() {
    int n, int_v[MAX];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &int_v[i]);

    if(crescente(n, int_v))
        printf("verdadeiro");
    else
        printf("falso");

    return 0;
}

bool crescente(int n , int v[]) {
    for (int i = 0; i < n - 1; i++)
        if (v[i] >= v[i + 1])
            return false;
    return true;
}