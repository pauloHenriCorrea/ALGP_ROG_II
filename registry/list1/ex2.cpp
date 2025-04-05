#include <stdio.h>
#include <string.h>
#define MAX 50

struct pessoa
{
    char nome[MAX];
    float altura;
    float peso;
    char CPF[12];
    char sexo;
};

void forms(pessoa v[], int n);
void buscar_pelo_CPF(pessoa v[], char CPF[12], int n);

int main()
{
    pessoa v[MAX];
    char CPF[12];
    int n;

    printf("Informe o numero de pessoas que deseja cadastrar: ");
    scanf("%d", &n);

    forms(v, n);

    printf("Informe o numero do CPF que deseja buscar: ");
    scanf(" %[^\n]", CPF);

    buscar_pelo_CPF(v, CPF, n);

    return 0;
}

void forms(pessoa v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Informe os dados da %d\n", i + 1);

        printf("\tNome: ");
        scanf(" %[^\n]", v[i].nome);

        printf("\tAltura: ");
        scanf("%f", &v[i].altura);

        printf("\tPeso: ");
        scanf("%f", &v[i].peso);

        printf("\tCPF: ");
        scanf(" %[^\n]", v[i].CPF);

        int escolha = 0;
        bool continuar = true;

        while (continuar)
        {
            printf("\tEscolha uma das opcoes abaixo:\n\t\t(1) Masculino\n\t\t(2) Feminino");
            scanf("%d", &escolha);

            if (escolha == 1)
            {
                v[i].sexo = 'M';
                continuar = false;
            }
            else if (escolha == 2)
            {
                v[i].sexo = 'F';
                continuar = false;
            }
            else
                printf("Opcao invalida");
        }
    }
}

void buscar_pelo_CPF(pessoa v[], char CPF[12], int n)
{
    bool continuar = true;
    int resposta = 0;
    while (continuar)
    {
        for (int i = 0; i < n; i++)
        {
            if (strcmp(v[i].CPF, CPF) == 0)
            {
                float altura = v[i].altura, peso = v[i].peso;
                float imc = peso / (altura * altura);
                printf("%.2f", imc);
            }
        }
        printf("Deseja consultar outro CPF:\n(1) Sim\n(2) Não ");
        scanf("%d", &resposta);

        if (resposta == 2)
            continuar = false;
    }
}