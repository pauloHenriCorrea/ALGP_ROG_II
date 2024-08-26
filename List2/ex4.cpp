#include <stdio.h>

int main() {
    int m[3][2], value;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &value);
            m[i][j] = value;
        }
    }

    /*
    c_c = null column counter
    c_l = null lines counter
    */
    int c_l = 0, c_c = 0, i, j;

    // checks if there are null rows
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

    // checks if there are null coluns
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



    printf("NUMBERS IN NULL LINES ARE: %d\nNUMBERS IN NULL COLUMNS ARE: %d", c_l,c_c);
    return 0;
}