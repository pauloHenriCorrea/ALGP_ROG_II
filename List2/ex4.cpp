#include <stdio.h>

int main() {
    int m[3][2], value;
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &value);
            m[i][j] = value;
        }
    }

    /*
    c_c = contador de colunas nulas
    c_l = contador de linhas nulas
    */
    int c_l = 0, c_c = 0, i, j;

    // Verifica se existe linhas nulas
    for(i = 0; i < 3; i++) {
        bool l_null = true;
        for(j = 0; j < 2; j++){
            if (m[i][j] != 0) {
                l_null = false;
            }
        }
        if (l_null) {
            c_l ++;
        }
    }

    // Verifica se existe linhas nulas
    for(i = 0; i < 2; i++) {
        bool c_null = true;

        for(j = 0; j < 3; j++) {
            printf("%d\t", m[j][i]);
            if(m[j][i] != 0) {
                c_null = false;
            }
        }
        printf("\n");
        if (c_null) {
            c_c ++;
        }
    }



    printf("O número de linhas nulas é: %d\nO número de colunas nulas é: %d", c_l,c_c);
    return 0;
}