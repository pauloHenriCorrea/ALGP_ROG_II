#include <stdio.h>

void ler_valores(int tamanho,  char nome_vetor, int vetor[]);

int main () {
    int tamanho, pd_escalar;
    char nome_vetor;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int u[tamanho], v[tamanho];

    ler_valores(tamanho, 'u', u);
    ler_valores(tamanho, 'v', v);

    for(int i = 0; i < tamanho; i++){
        pd_escalar += (u[i] * v[i]);
    }
    printf("O Produto Escalar é: %d", pd_escalar);

    return 0;
}

void ler_valores(int tamanho, char nome_vetor, int vetor[]) {
    int valor;
    for(int i = 0; i < tamanho; i++) {
        printf("%c[%d] = ", nome_vetor,i);
        scanf("%d",&valor);
        vetor[i] = valor;
    }

}
