#include <stdio.h>
#define TAM 3
#define TAM_NAME 50

struct date
{
    int day;
    int month;
    int year;
};

struct people
{
    char name[TAM_NAME];
    float height;
    date date_of_birth;
};

void insert_people(people v[]);
void print_date(people v[]);
void search_date(people v[], date choice);

void insert_people(people v[])
{
    for (int i = 0; i < TAM; i++)
    {
        printf("Informe os dados da %d pessoa:\n", i + 1);
        printf("\tNome: ");
        scanf(" %[^\n]", v[i].name);

        printf("\tAltura: ");
        scanf("%f", &v[i].height);

        printf("\tData de nascimento: ");
        scanf("%d %d %d", &v[i].date_of_birth.day, &v[i].date_of_birth.month, &v[i].date_of_birth.year);
    }
}

void print_date(people v[]) {
    for(int i = 0; i < TAM; i++)
        printf("Name: %s, Altura: %.2f\n", v[i].name, v[i].height);
}

void search_date(people v[], date choice) {
    int count = 0;
    for(int i = 0; i < TAM; i++) {
        if(v[i].date_of_birth.year < choice.year)
            printf("Nome: %s\n", v[i].name);
        else if(v[i].date_of_birth.month < choice.month)
            printf("Nome: %s\n", v[i].name);
        else if(v[i].date_of_birth.day < choice.day)
            printf("Nome: %s\n", v[i].name);
        else
            count++;
    }

    if(count == TAM -1)
        printf("Nenhuma pessoa nasceu antes da data informada!");
}

int main()
{
    people v[TAM];
    date option_date;

    insert_people(v);

    print_date(v);

    printf("Informe uma data para que possamos listar as pessoas que nasceram antes da data desejada:");
    scanf("%d %d %d", &option_date.day, &option_date.month, &option_date.year);

    search_date(v, option_date);
    return 0;
}