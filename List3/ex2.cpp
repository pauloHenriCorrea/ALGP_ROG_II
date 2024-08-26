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
                printf("\tBAND %d: %s \n", i + 1, band[i].name);
                exist = true;
            };
        };

        if (!exist)
            printf("THERE IS NO BAND WITH THIS GENRE!\n");
    }
    else
    {
        bool favorite = false;
        for (int i = 0; i < FIVE; i++)
            if (strcmp(band[i].name, s) == 0)
                favorite = true;

        if (favorite)
            printf("THIS BAND IS AMONG THE TOP 5 FAVORITES!\n");
        else
            printf("THIS BAND IS'T AMONG THE TOP 5 FAVORITES!\n");
    };
};

void enter_data(musical_band band[FIVE], int ranking[FIVE])
{
    for (int i = 0; i < FIVE; i++)
    {
        printf("ENTER THE DATA OF THE %d° BAND: \n", i + 1);
        printf("\tNAME: ");
        fgets(band[i].name, FIFTY, stdin);
        band[i].name[strcspn(band[i].name, "\n")] = '\0';

        printf("\tGENDER: ");
        fgets(band[i].gender, FIFTY, stdin);
        band[i].gender[strcspn(band[i].gender, "\n")] = '\0';

        printf("\tNUMBERS OF MEMBERS: ");
        scanf("%d%*c", &band[i].number_members);

        printf("\tCLASSIFICATION POSITION: ");
        scanf("%d%*c", &band[i].ranking_position);

        ranking[i] = band[i].ranking_position;
    };
};

bool menu()
{
    musical_band band[FIVE];
    char choise;

    printf("\t1 - ENTER YOUR 5 FAVORITE BANDS;\n");
    printf("\t2 - SEARCH FOR A BAND BY POSITION;\n");
    printf("\t3 - SEARCH FOR BANDS BY MUSIC GENRE;\n");
    printf("\t4 - CHECK IF THE BAND IS AMONG YOUR 5 FAVORITES;\n");
    printf("\t5 - EXIT;\n");
    printf("YOUR RESPONSE: ");
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
        printf("ENTER A NUMBER FROM 1 TO 5\nYOUR ANSWER: ");
        scanf("%d%*c", &band_position);
        band_position = check_ranking(band_position);
        search_band_by_position(band, band_position);
        break;
    }

    case '3':
    {

        char property[] = "gender";
        char gender_choise_response[FIFTY];
        printf("ENTER YOUR MUSICAL GENRE:");
        fgets(gender_choise_response, FIFTY, stdin);
        gender_choise_response[strcspn(gender_choise_response, "\n")] = '\0';
        compare_string(band, gender_choise_response, property);
        break;
    }

    case '4':
    {
        char property[] = "is_favorite";
        char band_choise_response[FIFTY];
        printf("ENTER THE BAND NAME: ");
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
        printf("PLEASE ENTER A NUMBER FROM 1 TO 5!\n");
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
            printf("\tNAME: %s\n", band[i].name);
            printf("\tGENDER: %s\n", band[i].gender);
            printf("\tNUMBER OF MEMBERS: %d\n", band[i].number_members);
        };
    };
};

void show_bands(musical_band band[FIVE])
{
    for (int i = 0; i < FIVE; i++)
    {
        printf("BAND THAT IS AT %d° IN THE RANKING:\n", i + 1);
        printf("\tNAME: %s\n", band[i].name);
        printf("\tGENDER: %s\n", band[i].gender);
        printf("\tNUMBER OF MEMBERS: %d\n", band[i].number_members);
    };
};

int check_ranking(int band_position)
{
    bool verified = false;
    while (!verified)
    {
        if (band_position > 5 && band_position < 1)
        {
            printf("ENTER A NUMBER FROM 1 TO 5\nYOUR ANSWER: ");
            scanf("%d%*c", &band_position);
        }
        else
            verified = true;
    };
    return band_position;
};