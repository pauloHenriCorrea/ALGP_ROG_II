#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

bool check_exist_value(int num, int v[]);

int main() {
    int value, v[6], num;
    
    srand(time(NULL)); // utilizado para toda vez gerar um número aleatório diferente ou igual do que já foi gerado;
    for(int i = 0; i < 6; i++) {
        value = rand() % 60 + 1 ; // Usado para gerar um númeor aletório em um intervalo de 0 ha 60;
        if(!check_exist_value(value, v)) {
            v[i] = value;
        } else {
            i--;
        }
    }

    while (num != 0) {
        printf("Informe um número ente 1 e 60: \n");
        scanf("%d", &num);
        if(num != 0) {
            if (check_exist_value(num, v)) {
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

bool check_exist_value(int num, int v[]) {
    for(int i = 0; i < 6; i++) {
        if(num == v[i]) {
            return true;
        }
    }
    return false;
}
