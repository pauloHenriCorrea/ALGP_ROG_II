#include <stdio.h>
#include <string.h>

void print_vetor(char v[], int size);

int main() {
    char name[100];

    printf("Informe seu nome completo: ");
    fgets(name, 100, stdin);

    int size = strlen(name) - 1;

    if (size <= 4 && name[3] == ' ') {
        print_vetor(name, size);
        printf("OBS: NUMBER OF LETTERS LESS THAN FOUR!!\n");
    } else if (size >= 4) {
        size = 4;
        print_vetor(name, size);
    } else {
        printf("THE NAME MUST HAVE AT LEAST THREE LETTERS.");
    }
}

void print_vetor(char v[], int size){
    printf("THE %d FIRST LETTERS:\n", size);
    for (int i = 0; i < size; i++)
        printf("%dº LETTER: %c\n", i + 1, v[i] == ' ' ? v[i + 1]: v[i]);
}