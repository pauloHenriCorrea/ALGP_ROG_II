// Programa: contadig.cpp
// Programador: Paulo Henrique Rodrigues Corrêa
// Data: 22/03/2025
// Este programa lê dois números inteiros, um indicando a
// quantidade de números a serem lidos e o outro o valor de
// um dígito d (0 a 9). O programa lê cada um dos números
// e a cada número lido computa a quantidade de dígitos do
// número iguais ao dígito d que ocorrem no número.

// declaração das bibliotecas utilizadas
#include <stdio.h>

// início da função principal
int main()
{
    // declaração das variáveis locais
    int numero,
        digito,
        temp,  // armazena o dígito menos significativo
        quant; // quantidade de dígitos iguais a digito

    // entrada: numero digito
    scanf("%d %d", &numero, &digito);

    while (numero > 0)
    {
        temp = numero % 10;

        if (temp == digito)
            quant++;
        numero /= 10;
    }

    // Imprime o resultado
    printf("%d\n", quant);

    return 0;

} // fim da função principal.