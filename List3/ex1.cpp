#include <stdio.h>
typedef struct {
    char name[50], CPF[12], participation_type, partner;
} participants;

float calculate_participation_value(participants p);

int main() {
    participants participant;
    float value;

    printf("Informe seu nome: ");
    fgets(participant.name, 50, stdin);

    printf("Informe seu CPF: ");
    fgets(participant.CPF, 50, stdin);

    printf("Tipo de Participação\tValor a Pagar\n-------------------------------------\nA - 1 Curso \tR$ 30,00\nB - 2 Cursos\tR$ 60,00\nC - 3 Cursos\tR$ 90,00\nD - 4 Cursos\tR$ 100,00\nSua resposta: ");
    fgets(&participant.participation_type, 50, stdin);

    printf("Você é sócio: \nS - Sim\nN - Não\nSua resposta: ");
    fgets(&participant.partner, 50, stdin);

    value = calculate_participation_value(participant);
    printf("%f", value);
    return 0;
}

float calculate_participation_value(participants p) {
    float value;

    switch (p.participation_type) {
        case 'A':
            value = 30;
            break;
        case 'B':
            value = 60;
            break;
        case 'C':
            value = 90;
            break;
        case 'D':
            value = 100;
            break;
    default:
        value = 60;
        break;
    }

    if(p.partner == 'S') {
        value *= 0.8;
    }

    return value;
}