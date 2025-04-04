// Programa: areaperimetroT.cpp
// Programador: Paulo Henrique Rodrigues Corrêa
// Data: 21/03/2025
// Diálogo: Este lê o valor dos lados de um triângulo e calcula o
// perímetro e a área do triângulo e imprime o resultado.
// Bibliotecas Utilizadas
#include <stdio.h> // printf, scanf
#include <math.h>  // sqrt
// início da função principal
int main(void)
{
    // declaração das variáveis locais
    double lado1, lado2, lado3;
    double perimetro, semip; // semiperímetro
    double area;

    // entrada: lado1 lado2 lado3

    // Passo 1. Leia os lados do triângulo
    scanf("%lf", &lado1);
    scanf("%lf", &lado2);
    scanf("%lf", &lado3);

    // Passo 2. Calcule o perímetro e o semiperímetro
    perimetro = lado1 + lado2 + lado3;
    semip = perimetro / 2;

    // Passo 3. Calcule a área
    area = sqrt(semip*(semip-lado1)*(semip-lado2)*(semip-lado3));
    
    // Passo 4. Imprima o lado, perímetro e área
    printf("Lados = %5.2f, %5.2f, %5.2f\n", lado1, lado2, lado3);
    printf("Perímetro = %5.2f\n", perimetro);
    printf("Área = %5.2f\n", area);

    return 0;

    // saida: perímetro == lado1 + lado2 +lado3 && semi == perímetro/2
    //      área == sqrt(semip*(semip-lado1)*(semip-lado2)*(semip-lado3))
} // fim da função principal