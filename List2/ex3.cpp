#include <stdio.h>

void print_matriz(int m[][3], int lines, int coluns);

int main() {
    int value, i, j, matriz[3][3], transposed_matriz[3][3];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &value);
            matriz[i][j] = value;
            transposed_matriz[j][i] = value;
        }
    }

    printf("MATRIZ:\n");
    print_matriz(matriz, 3, 3);

    printf("TRANSPOSED MATRIZ:\n");
    print_matriz(transposed_matriz, 3, 3);

    return 0;
}

void print_matriz(int m[][3], int lines, int coluns) {
    for(int i = 0; i < lines; i++) {
        for(int j = 0; j < coluns; j++) {
            printf("%d\t", m[i][j]);
         }
        printf("\n");
    }
}