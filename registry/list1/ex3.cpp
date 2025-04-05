#include <stdio.h>
#define MAX 50

struct product
{
    int code;
    float price;
    char name[MAX];
};

void print_list(product v[], int n);
void registration(product v[], int n);
void search_by_code(product v[], int n, int code);

void print_list(product v[], int n)
{
    for (int i = 0; i < n; i++)
        printf("\nProduto %d:\n\tNome: %s\n\tCodigo: %d\n", i + 1, v[i].name, v[i].code);
}

void registration(product v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Informe os dados do %d produto:\n", i + 1);

        printf("\tNome: ");
        scanf(" %[^\n]", v[i].name);

        printf("\tCodigo: ");
        scanf(" %d", &v[i].code);

        printf("\tPreco: ");
        scanf(" %f", &v[i].price);
    }
}

void search_by_code(product v[], int n, int code)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i].code == code)
            printf("Preco: %f\n", v[i].price);
        else
            printf("Codigo nao existe no sistema");
    }
}
int main()
{

    int n;
    product v[MAX];

    printf("Informe quantos produtos deseja inserir: ");
    scanf("%d", &n);

    registration(v, n);
    print_list(v, n);

    int code = 1;
    while (code != 0)
    {
        printf("Informe o codigo do produto ou dijite (0) para encerrar o programa: ");
        scanf("%d", &code);
        if (code != 0)
            search_by_code(v, n, code);
    }
    return 0;
}