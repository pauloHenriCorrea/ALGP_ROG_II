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

void buscar_pelo_CPF(pessoa v[], char CPF[12], int n);
void buscar_pelo_sexo(pessoa v[], int n);
float calcular_IMC(pessoa v[], int i);
void forms(pessoa v[], int n);
bool menu();

void buscar_pelo_CPF(pessoa v[], char CPF[12], int n)
{
    bool continuar = true;
    int resposta = 0;

    while (continuar)
    {
        for (int i = 0; i < n; i++)
            if (strcmp(v[i].CPF, CPF) == 0)
                printf("%.2f", calcular_IMC(v, i));

        printf("Deseja consultar outro CPF:\n(0) Nao\n(1) Sim ");
        scanf("%d", &resposta);

        if (resposta == 0)
            continuar = false;
    }
}

void buscar_pelo_sexo(pessoa v[], int n)
{
    printf("\n\n");
    for (int i = 0; i < n; i++)
        if (v[i].sexo == 'M')
            printf("Nome: %s\nIMC: %.2f\n", v[i].nome, calcular_IMC(v, i));
    printf("\n\n");
}

float calcular_IMC(pessoa v[], int i)
{
    float altura = v[i].altura, peso = v[i].peso;
    float imc = peso / (altura * altura);
    return imc;
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
            printf("\tEscolha uma das opcoes abaixo:\n\t\t(1) Masculino\n\t\t(2) Feminino\n\t\tSua resposta: ");
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

bool menu()
{
    // Declarando as variáveis
    int option = 0, n;
    pessoa v[MAX];
    char CPF[12];

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

        buscar_pelo_CPF(v, CPF, n);
        break;

    case 3:
        buscar_pelo_sexo(v, n);
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