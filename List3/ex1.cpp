#include <stdio.h>
typedef struct {
    char nome[50], CPF[12], tipo_participacao, socio;
} participantes;

/* Prototipos*/
float calcula_valor_participacao(participantes p);

int main() {
    participantes participante;
    float valor;

    //Leitura de dados 
    printf("Informe seu nome: ");
    fgets(participante.nome, 50, stdin);

    printf("Informe seu CPF: ");
    fgets(participante.CPF, 50, stdin);

    printf("Tipo de Participação\tValor a Pagar\n-------------------------------------\nA - 1 Curso \tR$ 30,00\nB - 2 Cursos\tR$ 60,00\nC - 3 Cursos\tR$ 90,00\nD - 4 Cursos\tR$ 100,00\nSua resposta: ");
    fgets(&participante.tipo_participacao, 50, stdin);

    printf("Você é sócio: \nS - Sim\nN - Não\nSua resposta: ");
    fgets(&participante.socio, 50, stdin);

    valor = calcula_valor_participacao(participante);
    printf("%f", valor);
    return 0;
}

float calcula_valor_participacao(participantes p) {
    float valor;

    switch (p.tipo_participacao) {
        case 'A':
            valor = 30;
            break;
        case 'B':
            valor = 60;
            break;
        case 'C':
            valor = 90;
            break;
        case 'D':
            valor = 100;
            break;
    default:
        valor = 60;
        break;
    }

    if(p.socio == 'S') {
        valor *= 0.8;
    }

    return valor;
}