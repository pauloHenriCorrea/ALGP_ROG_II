#include <stdio.h>
#include <string.h>

void clear_string(char str[], int tamanho);

int main() {
    char string_1[100], string_2[100];
    int n, size_str_1, size_str_2;
    
    printf("Informe a primeira string: ");
    fgets(string_1,100, stdin);
    
    printf("Informe a segunda string: ");
    fgets(string_2,100, stdin);
    
    printf("Quantas letras da string 1 deseja adicionar na string 2? ");
    scanf("%d", &n);
    
    size_str_1 = strlen(string_1) - 1;
    size_str_2 = strlen(string_2) - 1;
    
    clear_string(string_1, size_str_1);
    clear_string(string_2, size_str_2);

    for(int i = 0; i < n; i++){
        string_2[size_str_2+i] = string_1[i];
    }
    printf("\nNova string = %s", string_2);
    return 0;
}

void clear_string(char str[], int tamanho){
    int i, j = 0; 
    // Percorre a string original
    for (i = 0; i < tamanho; i++) {
        // Se o caractere atual não for um espaço, coloca-o na nova posição
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }
    
    // Termina a string sem espaços
    str[j] = '\0';
}