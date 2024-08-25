#include <stdio.h>
#include <string.h>

void print_vetor(char v[], int size);

int main() {
    char name[100];

    printf("Informe seu nome completo: ");
    fgets(name, 100, stdin);

    int size = strlen(name) - 1;

    if (size <= 4 and name[3] == ' ') {
        print_vetor(name, size);
        printf("OBS: qtd de letras inferior a quatro!!\n");
    } else if (size >= 4) {
        size = 4;
        print_vetor(name, size);
    } else {
        printf("O nome precisa ter no mínimo 3 letras.");
    }
}

void print_vetor(char v[], int size){
    printf("As %d primeiras letras:\n", size);
    for (int i = 0; i < size; i++)
        printf("%dº letra: %c\n", i + 1, v[i] == ' ' ? v[i + 1]: v[i]);
}