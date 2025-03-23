#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, delta;
    float x_um, x_dois;
    scanf("%d %d %d", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta < 0)
        printf("A equação não possui raízes reais");
    else
    {
        x_um = (-b + sqrt(delta)) / 2 * a;
        x_dois = (-b - sqrt(delta)) / 2 * a;

        printf("%.2f, %.2f", x_dois, x_um);
    }
    return 0;
}