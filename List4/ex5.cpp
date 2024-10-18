#include <stdio.h>
#include <stdlib.h>

float calculete_avarage();
int main() {
    int n, i;
    float *notas;

    printf("informe a quantidade de notas que deseja inserir: ");
    scanf("%d", &n);

    notas = (float *) malloc(sizeof(int) * n);

    float nota;
    for (i = 0; i < n; i++) {
        printf("Informe a %d° nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (i = 0; i < n; i++)
        printf("%d° nota: %.2f\n", i + 1, notas[i]);

    free(notas);
    return 0;
}

float calculete_avarage() {
    
}