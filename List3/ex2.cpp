#include <stdio.h>
#include <string.h>

#define FIVE 5
#define FIFTY 50

typedef struct
{
    char name[FIFTY], gender[FIFTY];
    int ranking_position, number_members;
} musical_band;

void compare_string(musical_band band[FIVE], char s[FIFTY], char property[FIFTY]);
void enter_data(musical_band band[FIVE], int ranking[FIVE]);
bool menu();
void order(musical_band band[FIVE], int ranking[FIVE]);
void search_band_by_position(musical_band band[FIVE], int position);
void show_bands(musical_band band[FIVE]);
int check_ranking(int band_position);

int main()
{
    while (true)
        if (!menu())
            break;
    return 0;
};

void compare_string(musical_band band[FIVE], char s[FIFTY], char property[FIFTY])
{
    if (strcmp(property, "gender") == 0)
    {
        bool exist = false;
        for (int i = 0; i < FIVE; i++)
        {
            if (strcmp(band[i].gender, s) == 0)
            {
                printf("\tBANDA %d: %s \n", i + 1, band[i].name);
                exist = true;
            };
        };

        if (!exist)
            printf("NÃO EXISTE NENHUMA BANDA COM ESSE GÊNERO!\n");
    }
    else
    {
        bool favorite = false;
        for (int i = 0; i < FIVE; i++)
            if (strcmp(band[i].name, s) == 0)
                favorite = true;

        if (favorite)
            printf("ESSA BANDA ESTÁ ENTRE AS 5 FAVORITAS!\n");
        else
            printf("ESSA BANDA NÃO ESTÁ ENTRE AS 5 FAVORITAS!\n");
    };
};

void enter_data(musical_band band[FIVE], int ranking[FIVE])
{
    for (int i = 0; i < FIVE; i++)
    {
        printf("INFORME OS DADOS DA %d° BANDA: \n", i + 1);
        printf("\tNOME: ");
        fgets(band[i].name, FIFTY, stdin);
        band[i].name[strcspn(band[i].name, "\n")] = '\0';

        printf("\tGÊNERO: ");
        fgets(band[i].gender, FIFTY, stdin);
        band[i].gender[strcspn(band[i].gender, "\n")] = '\0';

        printf("\tNÚMERO DE INTEGRANTES: ");
        scanf("%d%*c", &band[i].number_members);

        printf("\tPOSIÇÃO NO RANKING: ");
        scanf("%d%*c", &band[i].ranking_position);

        ranking[i] = band[i].ranking_position;
    };
};

bool menu()
{
    musical_band band[FIVE];
    char choise;

    printf("\t1 - INSERIR SUAS 5 BANDAS FAVORITAS;\n");
    printf("\t2 - BUSCAR BANDA PELA POSIÇÃO;\n");
    printf("\t3 - BUSCAR BANDAS PELO GÊNERO MÚSICAL;\n");
    printf("\t4 - VERIFICAR SE A BANDA ESTÁ ENTRE AS 5 FAVORITAS;\n");
    printf("\t5 - SAIR;\n");
    printf("SUA RESPOSTA: ");
    scanf("%c%*c", &choise);

    switch (choise)
    {
    case '1':
    {
        int ranking[FIVE];
        enter_data(band, ranking);
        order(band, ranking);
        show_bands(band);
        break;
    }

    case '2':
    {
        int band_position;
        printf("INFORME UM NÚMERO DE 1 ATÉ 5\nSUA RESPOSTA: ");
        scanf("%d%*c", &band_position);
        band_position = check_ranking(band_position);
        search_band_by_position(band, band_position);
        break;
    }

    case '3':
    {

        char property[] = "gender";
        char gender_choise_response[FIFTY];
        printf("INFORME SEU GÊNERO MUSICAL:");
        fgets(gender_choise_response, FIFTY, stdin);
        gender_choise_response[strcspn(gender_choise_response, "\n")] = '\0';
        compare_string(band, gender_choise_response, property);
        break;
    }

    case '4':
    {
        char property[] = "is_favorite";
        char band_choise_response[FIFTY];
        printf("INFORME O NOME DA BANDA: ");
        fgets(band_choise_response, FIFTY, stdin);
        band_choise_response[strcspn(band_choise_response, "\n")] = '\0';
        compare_string(band, band_choise_response, property);
        break;
    }

    case '5':
    {
        return false;
        break;
    }
    default:
        printf("POR FAVOR, INSIRA UM NÚMERO DE 1 ATÉ 5!\n");
        break;
    }
    return true;
};

void order(musical_band band[FIVE], int ranking[FIVE])
{
    int aux;
    char name_aux[FIFTY];
    char gender_aux[FIFTY];
    int number_members_aux;
    int ranking_position_aux;

    for (int i = 0; i < FIVE; i++)
    {
        for (int j = 0; j < FIVE; j++)
        {
            if (ranking[j] > ranking[i])
            {
                // Oredenando o vetor ranking
                aux = ranking[j];
                ranking[j] = ranking[i];
                ranking[i] = aux;

                // Trocando os nomes
                strcpy(name_aux, band[j].name);
                strcpy(band[j].name, band[i].name);
                strcpy(band[i].name, name_aux);

                // Trocando os gêneros músicais
                strcpy(gender_aux, band[j].gender);
                strcpy(band[j].gender, band[i].gender);
                strcpy(band[i].gender, gender_aux);

                // Trocando o número de membros
                number_members_aux = band[j].number_members;
                band[j].number_members = band[i].number_members;
                band[i].number_members = number_members_aux;

                // Trocando as posições no ranking
                ranking_position_aux = band[j].ranking_position;
                band[j].ranking_position = band[i].ranking_position;
                band[i].ranking_position = ranking_position_aux;
            };
        };
    };

    for (int i = 0; i < FIVE; i++)
    {
        printf("BANDA QUE ESTÁ EM %d° NO RANKING:\n", i + 1);
        printf("\tNOME: %s\n", band[i].name);
        printf("\tGÊNERO: %s\n", band[i].gender);
        printf("\tNÚMERO DE INTEGRANTES: %d\n", band[i].number_members);
    };
};

void search_band_by_position(musical_band band[FIVE], int position)
{
    for (int i = 0; i < FIVE; i++)
    {
        if (band[i].ranking_position == position)
        {
            printf("\tNOME: %s\n", band[i].name);
            printf("\tGÊNERO: %s\n", band[i].gender);
            printf("\tNÚMERO DE INTEGRANTES: %d\n", band[i].number_members);
        };
    };
};

void show_bands(musical_band band[FIVE])
{
    for (int i = 0; i < FIVE; i++)
    {
        printf("BANDA QUE ESTÁ EM %d° NO RANKING:\n", i + 1);
        printf("\tNOME: %s\n", band[i].name);
        printf("\tGÊNERO: %s\n", band[i].gender);
        printf("\tNÚMERO DE INTEGRANTES: %d\n", band[i].number_members);
    };
};

int check_ranking(int band_position)
{
    bool verified = false;
    while (!verified)
    {
        if (band_position > 5 && band_position < 1)
        {
            printf("INFORME UM NÚMERO DE 1 ATÉ 5\nSUA RESPOSTA: ");
            scanf("%d%*c", &band_position);
        }
        else
            verified = true;
    };
    return band_position;
};