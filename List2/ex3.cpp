#include <stdio.h>

int main() {
    int linhas, colunas;

    printf("Informe o número de linhas: ");
    scanf("%d", &linhas);

    printf("Informe o número de colunas: ");
    scanf("%d", &colunas);

    int valor, i, j, matriz[linhas][colunas], matriz_transposta[colunas][linhas];

    // Inserindo os valores na matriz
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &valor);
            matriz[i][j] = valor;
            matriz_transposta[j][i] = valor;
        }
    }

    printf("Matriz:\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transposta:\n");
    for(i = 0; i < colunas; i++){
        for(j = 0; j < linhas; j++) {
            printf("%d\t", matriz_transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
