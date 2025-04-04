// Programa: somaimpar.cpp
// Programador: Paulo Henrique Rodrigues Corrêa
// Data: 21/03/2025
// Este programa lê dois números inteiros,
// inicio e fim e calcula a soma dos numeros
// inteiros ímpares entre inicio e fim,
// inclusive inicio e fim
// Declaração das biliotecas utilizadas
#include <stdio.h>

// início da função principal
int main()
{
    // declaração das variáveis utilizadas
    int inicio, fim, soma;

    // Passo 1. Leia a entrada e inicialize soma
    scanf("%d", &inicio);
    scanf("%d", &fim);

    // Passo 2. Calcule a soma em [inicio,fim]
    // Passo 2.1. Verifique se inicio é impar
    for (int i = inicio; i <= fim; i++)
        if (i % 2 != 0)
            soma += i;

    // Passo 3. Imprima o resultado
    printf("%d\n", soma);

    return 0;

} // fim main