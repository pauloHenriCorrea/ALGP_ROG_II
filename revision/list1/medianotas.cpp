#include <stdio.h> // printf, scanf
// Programa: medianotas.cpp
// Programador: Paulo Henrique Rodrigues Corrêa
// Data: 21/03/2025
// Este programa calcula a média final de um aluno para
// um curso com o total de três provas e dois trabalhos. As
// provas compõe 75% da nota da prova e os trabalhos 25%.
// Declaração das bibliotecas utilizadas

// inicio da função principal
int main()
{

    // Declaração das Variáveis locais
    double prova1; // nota primeira prova
    double prova2; // nota segunda prova
    double prova3; // nota terceira prova

    double mediaProvas; // média das notas das provas

    double trabalho1; // nota do trabalho 1
    double trabalho2; // nota do trabalho 2

    double mediaTrabalhos; // média das notas dos trabalhos

    double mediaFinal; // porcentagem total da nota

    scanf("%lf", &prova1);
    scanf("%lf", &prova2);
    scanf("%lf", &prova3);

    mediaProvas = (prova1 + prova2 + prova3) / 3;

    scanf("%lf", &trabalho1);
    scanf("%lf", &trabalho2);

    mediaTrabalhos = (trabalho1 + trabalho2) / 2;

    mediaFinal = (mediaProvas * 0.75) + (mediaTrabalhos * 0.25);

    // Imprima os resultados
    printf("======= NOTAS ========\n");
    printf("Primeira Prova    %4.1f\n", prova1);
    printf("Segunda Prova     %4.1f\n", prova2);
    printf("Terceira Prova    %4.1f\n", prova3);
    printf("Média Provas      %4.1f\n\n", mediaProvas);
    printf("Primeiro Trabalho %4.1f\n", trabalho1);
    printf("Segundo Trabalho  %4.1f\n", trabalho2);
    printf("Média Trabalhos   %4.1f\n", mediaTrabalhos);
    printf("----------------------\n");
    printf("Média Final       %4.1f\n", mediaFinal);

    return 0;

} // fim da função principal