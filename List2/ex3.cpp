#include <stdio.h>
int imprime_matriz(int **m, int linhas, int colunas);
int main() {

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
    imprime_matriz(matriz, linhas, colunas);

    printf("Matriz transposta:\n");
    imprime_matriz(matriz_transposta, colunas, linhas);

    return 0;
}

int imprime_matriz(int **m, int linhas, int colunas) {
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d\t", m[i][j]);
         }
        printf("\n");
    }
}