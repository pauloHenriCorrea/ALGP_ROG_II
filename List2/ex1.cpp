#include <stdio.h>

void read_values(int size, char name_vector, int vector[]);

int main () {
    int dot_product;

    int u[3], v[3];

    read_values(3, 'u', u);
    read_values(3, 'v', v);

    for(int i = 0; i < 3; i++){
        dot_product += (u[i] * v[i]);
    }
    
    printf("THE SCALAR PRODUCT IS: %d", dot_product);

    return 0;
}

void read_values(int size, char name_vector, int vector[]) {
    int value;
    for(int i = 0; i < size; i++) {
        printf("%c[%d] = ", name_vector,i);
        scanf("%d",&value);
        vector[i] = value;
    }

}
