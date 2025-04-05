#include <stdio.h>
#define MAX 50

struct aluno
{
    char name[MAX];
    char registration[MAX];
    int n1;
    int n2;
};

void recebendo_dados(aluno v[MAX], int n);
void imprimir(aluno v[MAX], int n);

int main()
{
    int n;
    aluno alunos[MAX];

    printf("Informe o número de alunos que deseja inserir: ");
    scanf("%d", &n);

    recebendo_dados(alunos, n);

    imprimir(alunos, n);

    return 0;
}

void recebendo_dados(aluno v[MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Informe os dados do %d°:\n", i+1);
            printf("\tNome: ");
            scanf(" %[^\n]", v[i].name);

            printf("\tNúmero de matricula: ");
            scanf(" %[^\n]", v[i].registration);

            printf("\tNota 1: ");
            scanf("%d", &v[i].n1);

            printf("\tNota 2: ");
            scanf("%d", &v[i].n2);
    }
}

void imprimir(aluno v[MAX], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
        printf("%s\n%s\n%d\n", v[i].registration, v[i].name, (v[i].n1 + v[i].n2) / 2);
    printf("\n");
}