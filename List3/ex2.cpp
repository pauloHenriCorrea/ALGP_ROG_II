#include <stdio.h>
#include <string.h>

#define FIVE 5
#define FIFTY 50

typedef struct {
    char name[FIFTY], gender[FIFTY];
    int ranking_position, number_members;
} musical_band;

void enter_data(musical_band band[FIVE], int ranking[FIVE]);

// Analizar as funções find_bands_by_genre e is_favorite, e pensar em uma solução para tornar apenas uma função que seja equivalente as duas
void find_bands_by_genre(musical_band band[FIVE], char s[FIFTY]); // s = string inserida pelo usuário
void is_favorite(musical_band band[FIVE], char s[FIFTY]); // s = string inserida pelo usuário

bool menu();
void order(musical_band band[FIVE], int ranking[FIVE]);
void search_band_by_position(musical_band band[FIVE], int position);
void show_bands(musical_band band[FIVE]);
int check_ranking(int band_position);

int main() {
    while(true) {
        if(!menu())
            break;
    }
    return 0;
};

void enter_data(musical_band band[FIVE], int ranking[FIVE]) {
    for (int i = 0; i < FIVE; i++) {
        // printf("INFORME OS DADOS DA %d° BANDA: \n", i + 1);
        printf("\tNOME: ");
        fgets(b[i].name, FIFTY, stdin);
        b[i].name[strcspn(b[i].name, "\n")]='\0';

        printf("\tGÊNERO: ");
        fgets(b[i].gender, FIFTY, stdin);
        b[i].gender[strcspn(b[i].gender, "\n")]='\0';

        printf("\tNÚMERO DE INTEGRANTES: ");
        scanf("%d", &b[i].number_members);
        
        printf("\tPOSIÇÃO NO RANKING: ");
        scanf("%d%*c", &b[i].ranking_position);
        
        ranking[i] = b[i].ranking_position;
    }
}

void find_bands_by_genre(musical_band band[FIVE], char s[FIFTY]) {
    bool exist = false;
    for (int i = 0; i < FIVE; i++) {
        if (strcmp(b[i].gender, s) == 0) {
            printf("\tBANDA %d: %s \n", i + 1, b[i].name);
            exist = true;
        };
    };

    if (not exist) {
        printf("NÃO EXISTE NENHUMA BANDA COM ESSE GÊNERO!\n");
    }
};

void is_favorite(musical_band band[FIVE], char s[FIFTY]) {
    bool favorite = false;
    for (int i = 0; i < FIVE; i++)
        if(strcmp(b[i].name, s) == 0)
            favorite = true;

    if(favorite)
        printf("ESSA BANDA ESTÁ ENTRE AS 5 FAVORITAS!\n");
    else 
        printf("ESSA BANDA NÃO ESTÁ ENTRE AS 5 FAVORITAS!\n");
}

bool menu() {
    musical_band band[FIVE];
    char choise;

    printf("\t1 - INSERIR SUAS 5 BANDAS FAVORITAS;\n");
    printf("\t2 - BUSCAR BANDA PELA POSIÇÃO;\n");
    printf("\t3 - BUSCAR BANDAS PELO GÊNERO MÚSICAL;\n");
    printf("\t4 - VERIFICAR SE A BANDA ESTÁ ENTRE AS 5 FAVORITAS;\n");
    printf("\t5 - SAIR;\n");
    printf("SUA RESPOSTA: ");
    scanf("%c", &choise);

    switch (choise) {
        case '1':
            int ranking[FIVE];
            enter_data(band, ranking);
            order(band, ranking);
            show_bands(band);
            break;

        case '2':
            int band_position;
            printf("INFORME UM NÚMERO DE 1 ATÉ 5\nSUA RESPOSTA: ");
            scanf("%d%*c", &band_position);
            band_position = check_ranking(band_position);
            search_band_by_position(band, band_position);
            break;

        case '3':
            char gender_choise_response[FIFTY];
            printf("INFORME SEU GÊNERO MUSICAL:");
            fgets(gender_choise_response, FIFTY, stdin);
            gender_choise_response[strcspn(gender_choise_response, "\n")]='\0';
            find_bands_by_genre(band, gender_choise_response);
            break;

        case '4':
            char band_choise_response[FIFTY];
            printf("INFORME O NOME DA BANDA: ");
            fgets(band_choise_response, FIFTY, stdin);
            band_choise_response[strcspn(band_choise_response, "\n")] = '\0';
            is_favorite(band, band_choise_response);
            break;
        
        case '5':
            return false;
            break;

        default:
            printf("POR FAVOR, INSIRA UM NÚMERO DE 1 ATÉ 5!\n");
            break;
    }
    return true;
}

void order(musical_band band[FIVE], int ranking[FIVE]){
    int aux;
    char name_aux[FIFTY];
    char gender_aux[FIFTY];
    int number_members_aux;
    int ranking_position_aux;

    for(int i = 0; i < FIVE; i++) {
        for(int j = 0; j < FIVE; j++) {
            if(r[j] > r[i]){
                // Oredenando o vetor ranking
                aux = r[j];
                r[j] = r[i];
                r[i] = aux;

                // Trocando os nomes
                strcpy(name_aux, b[j].name);
                strcpy(b[j].name, b[i].name);
                strcpy(b[i].name, name_aux);
                
                // Trocando os gêneros músicais
                strcpy(gender_aux, b[j].gender);
                strcpy(b[j].gender, b[i].gender);
                strcpy(b[i].gender, gender_aux);

                // Trocando o número de membros
                number_members_aux = b[j].number_members;
                b[j].number_members = b[i].number_members;
                b[i].number_members = number_members_aux;
                
                // Trocando as posições no ranking
                ranking_position_aux = b[j].ranking_position;
                b[j].ranking_position = b[i].ranking_position;
                b[i].ranking_position = ranking_position_aux;
            }
        }
    }

    for(int i = 0; i < FIVE; i++) {
        printf("BANDA QUE ESTÁ EM %d° NO RANKING:\n", i + 1);
        printf("\tNOME: %s\n", b[i].name);
        printf("\tGÊNERO: %s\n", b[i].gender);
        printf("\tNÚMERO DE INTEGRANTES: %d\n", b[i].number_members);
    }
}

void search_band_by_position(musical_band band[FIVE], int position) {
    for (int i = 0; i < FIVE; i++) {
        if (b[i].ranking_position == p) {
            printf("\tNOME: %s\n", b[i].name);
            printf("\tGÊNERO: %s\n", b[i].gender);
            printf("\tNÚMERO DE INTEGRANTES: %d\n", b[i].number_members);
        };
    };
};

void show_bands(musical_band band[FIVE]) {
    for(int i = 0; i < FIVE; i++) {
        printf("BANDA QUE ESTÁ EM %d° NO RANKING:\n", i + 1);
        printf("\tNOME: %s\n", band[i].name);
        printf("\tGÊNERO: %s\n", band[i].gender);
        printf("\tNÚMERO DE INTEGRANTES: %d\n", band[i].number_members);
    }
}

int check_ranking(int band_position) {
    bool verified = false;
    while(!verified) {
        if(band_position > 5 and band_position < 1) {
            printf("INFORME UM NÚMERO DE 1 ATÉ 5\nSUA RESPOSTA: ");
            scanf("%d%*c", &band_position);
        } else {
            verified = true;
        }
    }
    return band_position;
}