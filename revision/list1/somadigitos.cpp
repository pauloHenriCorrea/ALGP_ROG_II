// Programa: somadigitos.cpp
// Programador: Paulo Henrique Rodrigues Corrêa
// O Diálogo: Programa que calcula e imprime a soma dos dois
// dígitos menos significativo de um inteiro (mais a direita).
// Declaração das biliotecas utilizadas
#include <stdio.h> // printf

// início da função principal
int main()
{
    // Declaração das Variáveis Locais
    int intNum;

    int umDigito;
    int doisDigito;

    int soma;

    scanf("%d", &intNum);

    umDigito = intNum % 10;
    
    intNum /= 10;

    doisDigito = intNum % 10;

    soma = umDigito + doisDigito;
    printf("%d\n", soma);

    return 0;

} // fim da função principal
