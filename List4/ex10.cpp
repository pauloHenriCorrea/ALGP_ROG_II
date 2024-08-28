#include <stdio.h>

void calcula_soma(int &soma, int n);
void imprime_valor(int valor, int n);

int main()
{
    int soma = 0, n;

    printf("Informe o valor de n: ");
    scanf("%d", &n);

    calcula_soma(soma, n);
    imprime_valor(soma, n);

    return 0;
}

void calcula_soma(int &soma, int n)
{
    while (n > 0)
    {
        soma += n;
        n -= 1;
    }
}
void imprime_valor(int valor, int n)
{
    printf("A soma dos %d primeiros numero e: %d", n, valor);
}
