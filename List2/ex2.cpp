#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

bool verifica_se_valor_existe(int num, int v[]);
int main() {
    int valor, v[6], num;
    
    srand(time(NULL)); // utilizado para toda vez gerar um número aleatório diferente ou igual do que já foi gerado;
    for(int i = 0; i < 6; i++) {
        valor = rand() % 60 + 1 ; // Usado para gerar um númeor aletório em um intervalo de 0 ha 60;
        if(!verifica_se_valor_existe(valor, v)) {
            v[i] = valor;
        } else {
            i--;
        }
    }

    while (num != 0) {
        printf("Informe um número ente 1 e 60: \n");
        scanf("%d", &num);
        if(num != 0) {
            if (verifica_se_valor_existe(num, v)) {
                printf("O número informado existe no vetor!\n");
            } else {
                printf("O número informado não existe no vetor!\n");
            }

        }  else {
            printf("FIM.");
        }
    }
    

    return 0;
}

bool verifica_se_valor_existe(int num, int v[]) {
    for(int i = 0; i < 6; i++) {
        if(num == v[i]) {
            return true;
        }
    }
    return false;
}
