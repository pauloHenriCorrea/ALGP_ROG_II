#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, *notas, j;

    printf("informe a quantidade de notas que deseja inserir: ");
    scanf("%d", &i);

    notas = (int *)malloc(sizeof(int) * i);

    float nota;
    for (j = 0; j < i; j++) {
        printf("Informe a %d° nota: ", j + 1);
        scanf("%f", nota);
        notas[j] = nota;
    }

    free(notas);
    return 0;
}