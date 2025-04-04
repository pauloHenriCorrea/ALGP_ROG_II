#include <stdio.h>
#define T 500

void ler_dados(int a, int l[]);
void l1_contida_l2(int *count, int n, int l1[], int l2[], int l3[]);

int main()
{
    int a, b, la[T], lb[T], la_b[T], count = 0;

    scanf("%d", &a);
    ler_dados(a, la);

    scanf("%d", &b);
    ler_dados(b, lb);

    if (a > b)
        l1_contida_l2(&count, a, la, lb, la_b);
    else
        l1_contida_l2(&count, b, la, lb, la_b);

    if (count > 0)
    {
        for (int i = 0; i < count; i++)
            printf("%d ", la_b[i]);
    }
    return 0;
}

void ler_dados(int n, int l[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &l[i]);
}

void l1_contida_l2(int *count, int n, int l1[], int l2[], int l3[])
{
    bool pass = false;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (l1[i] == l2[j])
            {
                l3[*count] = l1[i];
                *count+=1;
                pass = true;
                break;
            }
    if (!pass)
        printf("vazia");
}
