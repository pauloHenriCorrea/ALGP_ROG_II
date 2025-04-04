#include <stdio.h>
#define MAX 10

void mediaAR(float media, float notaAP);

int main()
{
    float media, notaAp;
    char msg[MAX];
    
    scanf("%f %f", &notaAp, &media);

    mediaAR(media, notaAp);

    return 0;
}

void mediaAR(float media, float notaAP)
{
    if (media >= notaAP)
        printf("%.1f Aprovado", media);
    else
        printf("%.1f Reprovado", media);
}