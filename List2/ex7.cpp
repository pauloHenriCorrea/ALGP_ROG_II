#include <stdio.h>
#include <string.h>

void imprime_vetor(char v[], int tamanho);
int main() {
    char nome[100];

    printf("Informe seu nome completo: ");
    fgets(nome, 100, stdin);
    // scanf("%s", nome);

    int tamanho = strlen(nome) - 1;

    if (tamanho <= 4 and nome[3] == ' ') {
        imprime_vetor(nome, tamanho);
        printf("OBS: qtd de letras inferior a quatro!!\n");
    } else if (tamanho >= 4) {
        tamanho = 4;
        imprime_vetor(nome, tamanho);
    } else {
        printf("O nome precisa ter no mínimo 3 letras.");
    }
}

void imprime_vetor(char v[], int tamanho){
    printf("As %d primeiras letras:\n", tamanho);
    for (int i = 0; i < tamanho; i++)
        printf("%dº letra: %c\n", i + 1, v[i] == ' ' ? v[i + 1]: v[i]);
}