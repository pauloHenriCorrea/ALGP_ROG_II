#include <stdio.h>
typedef struct {
    char name[50], CPF[12], participation_type, partner;
} participants;

float calculate_participation_value(participants p);

int main() {
    participants participant;
    float value;

    printf("INFORM YOUR NAME: ");
    fgets(participant.name, 50, stdin);

    printf("INFORM YOUR CPF: ");
    fgets(participant.CPF, 50, stdin);

    printf("TYPE OF PARTICIPATION?\tAMOUNT TO PAY\n-------------------------------------\nA - 1 COURSE \tR$ 30,00\nB - 2 COURSES\tR$ 60,00\nC - 3 COURSES\tR$ 90,00\nD - 4 COURSES\tR$ 100,00\nYOUR RESPONSE: ");
    fgets(&participant.participation_type, 50, stdin);

    printf("IT'S A MEMBER? \nY - YES\nN - NOT\nYOUR RESPONSE: ");
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

    if(p.partner == 'Y') {
        value *= 0.8;
    }

    return value;
}