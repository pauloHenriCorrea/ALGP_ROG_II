#include <stdio.h>

double calcSalario(double vh, int nHs);

int main()
{
    int code, nHs;
    double vh, salario;

    scanf("%d %lf %d", &code, &vh, &nHs);
    salario = calcSalario(vh, nHs);

    printf("%d %d %.2f %.2f", code, nHs, vh, salario);

    return 0;
}

double calcSalario(double vh, int nHs)
{

    if (nHs > 40)
        return (vh * 1.5) * nHs;
    else
        return vh * nHs;
}