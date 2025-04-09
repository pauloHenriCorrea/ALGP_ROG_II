#include <stdio.h>
#include <string.h>

#define CLIENT 3
#define LEN_NAME 50
#define LEN_CPF 14

struct client
{
    char name[LEN_NAME];
    char CPF[LEN_CPF];
    float balance;
    int i;
};

bool exist_CPF(char CPF[], client v[]);
void get_CPF(char CPF[]);
void menu();
void operation(client v[]);
int question_operarion();

// value: valor da operação que o usuário deseja
void recalculate_balance(float value, client v[], int i);
void registry(client v[]);
int search_i(char CPF[], client v[]);


bool exist_CPF(char CPF[], client v[])
{
    for (int i = 0; i < LEN_CPF; i++)
        if (strcmp(v[i].CPF, CPF) == 0)
            return true;
    printf("\nCPF nao encontrado!\nPor favor, digite um CPF valido!\n\n");
    return false;
}

void get_CPF(char CPF[])
{
    printf("Informe o numero CPF que deseja realizar a operacao na conta: ");
    scanf(" %[^\n]", CPF);
}

void menu()
{
    int n;
    client v[CLIENT];

    registry(v);

    n = question_operarion();

    if (n == 1)
        operation(v);
    else
        return;
}

void operation(client v[])
{
    char CPF[LEN_CPF];
    int n, i;
    float value;
    get_CPF(CPF);

    while (!exist_CPF(CPF, v))
    {
        get_CPF(CPF);
        if (exist_CPF(CPF, v))
            break;
    }

    printf("Informe qual operacao deseja fazer:\n");
    printf("\t(1) Saque\n");
    printf("\t(2) Deposito\n");
    printf("\tSua resposta: ");
    scanf("%d", &n);

    if(n == 1) {
        printf("Infome o valor que deseja sacar: ");
        scanf("%f", &value);
        value *= -1;
    } else {
        
        printf("Infome o valor que deseja depositar: ");
        scanf("%f", &value);
    }

    i = search_i(CPF, v);
    recalculate_balance(value, v, i);

    n = question_operarion();
    if(n == 1)
        operation(v);
}

int question_operarion() {
    int n;
    
    printf("Deseja fazer alguma movimentacao:\n");
    printf("\t(1) Sim\n");
    printf("\t(2) Nao\n");
    printf("\tSua resposta: ");

    scanf("%d", &n);
    return n;
}

void recalculate_balance(float value, client v[], int i)
{

    printf("Nome: %s\n", v[i].name);
    if(value < 0 && v[i].balance > value){
        v[i].balance -= value;
        printf("Saldo anterior: %.2f\n", v[i].balance + (-1 * value));
        printf("Saldo atual: %.2f\n", v[i].balance);
        return;
    }

    v[i].balance += value;

    printf("Saldo anterior: %f\n", v[i].balance - value);
    printf("Saldo atual: %.2f\n", v[i].balance);
}

void registry(client v[])
{
    for (int i = 0; i < CLIENT; i++)
    {
        printf("\n");
        printf("Informe os seguintes dados do %d cliente:\n", i + 1);

        printf("\tNome: ");
        scanf(" %[^\n]", v[i].name);

        printf("\tCPF: ");
        scanf(" %[^\n]", v[i].CPF);

        printf("\tPara criarmos sua conta, pedimos que realize um deposito inicial!\n\tInforme o valor que deseja depositar: ");
        scanf("%f", &v[i].balance);
    }
}

int search_i(char CPF[], client v[])
{
    for (int i = 0; i < LEN_CPF; i++)
        if (strcmp(v[i].CPF, CPF) == 0)
            return i;
    return -1;
}

int main()
{
    menu();

    return 0;
}
