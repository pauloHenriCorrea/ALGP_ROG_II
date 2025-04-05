#include <stdio.h>
#include <string.h>
#define MAX 50

struct people
{
    char name[MAX];
    float height;
    float weight;
    char CPF[12];
    char sex;
};

void search_by_CPF(people v[], char CPF[12], int n);
void search_by_sex(people v[], int n);
float calculate_IMC(people v[], int i);
void forms(people v[], int n);
bool menu();

void search_by_CPF(people v[], char CPF[12], int n)
{
    int resposta = 2;

    while (resposta != 0)
    {
        for (int i = 0; i < n; i++)
            if (strcmp(v[i].CPF, CPF) == 0)
                printf("%.2f", calculate_IMC(v, i));

        printf("Deseja consultar outro CPF:\n(0) Nao\n(1) Sim ");
        scanf("%d", &resposta);

        if (resposta == 0)
            resposta = 0;
    }
}

void search_by_sex(people v[], int n)
{
    printf("\n\n");
    for (int i = 0; i < n; i++)
        if (v[i].sex == 'M')
            printf("Nome: %s\nIMC: %.2f\n", v[i].name, calculate_IMC(v, i));
    printf("\n\n");
}

float calculate_IMC(people v[], int i)
{
    float height = v[i].height, weight = v[i].weight;
    float imc = weight / (height * height);
    return imc;
}

void forms(people v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Informe os dados da %d\n", i + 1);

        printf("\tNome: ");
        scanf(" %[^\n]", v[i].name);

        printf("\tAltura: ");
        scanf("%f", &v[i].height);

        printf("\tPeso: ");
        scanf("%f", &v[i].weight);

        printf("\tCPF: ");
        scanf(" %[^\n]", v[i].CPF);

        int escolha = 0;

        while (escolha != 0)
        {
            printf("\tEscolha uma das opcoes abaixo:\n\t\t(1) Masculino\n\t\t(2) Feminino\n\t\tSua resposta: ");
            scanf("%d", &escolha);

            if (escolha == 1)
            {
                v[i].sex = 'M';
                escolha = 0;
            }
            else if (escolha == 2)
            {
                v[i].sex = 'F';
                escolha = 0;
            }
            else
                printf("Opcao invalida");
        }
    }
}

bool menu()
{
    // Declarando as variáveis
    int option = 0, n;
    people v[MAX];
    char CPF[12];

    printf("\n\n");
    printf("Escolha uma das opcoes abaixo:\n");
    printf("\t(1) Cadastrar pessoa(s)\n");
    printf("\t(2) Consultar IMC pelo CPF\n");
    printf("\t(3) Consultar os dados de todas pessoas do sexo masculino\n");
    printf("\t(4) Finalizar programa\n");
    printf("\tSua resposta: ");
    scanf("%d", &option);
    printf("\n\n");

    switch (option)
    {
    case 1:
        printf("Informe o numero de pessoas que deseja cadastrar: ");
        scanf("%d", &n);
        forms(v, n);
        break;

    case 2:
        printf("Informe o numero do CPF que deseja buscar: ");
        scanf(" %[^\n]", CPF);

        search_by_CPF(v, CPF, n);
        break;

    case 3:
        search_by_sex(v, n);
        break;

    case 4:
        return false;

    default:
        printf("Opcao Invalida!");
        menu();
        break;
    }
    return true;
}

int main()
{
    while (menu())
        ;
    return 0;
}