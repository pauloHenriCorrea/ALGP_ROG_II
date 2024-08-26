#include <stdio.h>
#include <string.h>

void clear_string(char str[], int tamanho);

int main() {
    char string_1[100], string_2[100];
    int n, size_str_1, size_str_2;
    
    printf("ENTER THE FIRST STRING: ");
    fgets(string_1,100, stdin);
    
    printf("ENTER THE SECOND string: ");
    fgets(string_2,100, stdin);
    
    printf("HOW MANY LETTERS FROM THE FIRST STRING DO YOU WANT TO ADD TO THE SECOND STRING?");
    scanf("%d", &n);
    
    size_str_1 = strlen(string_1) - 1;
    size_str_2 = strlen(string_2) - 1;
    
    clear_string(string_1, size_str_1);
    clear_string(string_2, size_str_2);

    for(int i = 0; i < n; i++){
        string_2[size_str_2+i] = string_1[i];
    }
    printf("\nNEW STRING = %s", string_2);
    return 0;
}

void clear_string(char str[], int tamanho){
    int i, j = 0; 
    for (i = 0; i < tamanho; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }    
    str[j] = '\0';
}