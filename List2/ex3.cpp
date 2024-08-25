#include <stdio.h>

int print_matriz(int **m, int linhas, int colunas);

int main() {
    int value, i, j, matriz[3][3], matriz_transposta[3][3];

    // Inserindo os valores na matriz
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &value);
            matriz[i][j] = value;
            matriz_transposta[j][i] = value;
        }
    }

    printf("Matriz:\n");
    print_matriz(matriz, 3, 3);

    printf("Matriz transposta:\n");
    print_matriz(matriz_transposta, 3, 3);

    return 0;
}

int print_matriz(int **m, int linhas, int colunas) {
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d\t", m[i][j]);
         }
        printf("\n");
    }
}