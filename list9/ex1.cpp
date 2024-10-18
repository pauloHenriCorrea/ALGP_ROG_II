#include <stdio.h>
#include <stdlib.h>

// Definicao do tipo
struct cel {
    int content;
    struct cel *seg;
};

typedef struct cel celula;


// Prototipos
celula *busca(int y, celula *lst);
void busca_e_remova(int x, celula *lts);
void imprima(celula *lst);

/* A funcao insere uma nova celula em uma lista encadeada
 * entre a celula p e a seguinte  (supoe-se que p != NULL).
 * A nova celula tera conteudo y. 
 * */
void insira(int y, celula *p);
void insira_em_ordem(int y, celula *lst);
void remova_seguinte(celula *p);
void remova_tudo(celula *lst);
void remova_tudo_R(celula *lst);

int main() {
    // Cria uma lista encadeada com cabeca 
    celula c, *lst;

    // Inicializa a lista como vazia 
    c.seg = NULL;

    // lst recebe o endereco da cabeca
    lst = &c;

    // Sequencia de insercao
    insira_em_ordem(5, lst);
    insira_em_ordem(1, lst);
    insira_em_ordem(3, lst);
    insira_em_ordem(7, lst);

    imprima(lst);
    busca(5, lst);
    return 0;
}

celula *busca(int x, celula *lst) {
    celula *p;
    p = lst;
   
    while(p->seg != NULL && p->content != x)
        p = p->seg;
    return p;
}

void busca_e_remova(int x, celula *lts) {
    celula *p;

    p = lts;
    while(p->seg != NULL && p->seg->content != x)
        p = p->seg;

    remova_seguinte(p);
}

void imprima(celula *lst) {
    celula *p;

    printf("cabeca -> ");
    for(p = lst -> seg; p != NULL; p = p -> seg)
        printf("%d -> ", p -> content);
    printf("NULL\n");
}

void insira(int y, celula *p) {
    celula *nova;

    nova = (celula *) malloc(sizeof(celula));

    nova->content = y; // Recebe o conteudo y
    nova->seg = p->seg; // Inserindo nova celula na frente de p e fazendo com que o sefuinte de nova seja o seguinte de p
    p->seg = nova; // fazendo com que o seguinte de p seja nova
}

void insira_em_ordem(int y, celula *lst) {
    celula *p, *q;
    p = lst;
    q = lst -> seg;
    while (q != NULL && y > (q->content)) {
        p = q;
        q = q->seg;
    }
    insira(y , p);
}

void remova_seguinte(celula *p) {
    celula *lixo;

    lixo = p->seg;
    if (lixo != NULL)
        p->seg = lixo->seg;
    free(lixo);
}

void remova_tudo(celula * lst) {
    celula *p;
    p = lst;
    while(p->seg != NULL)
        remova_seguinte(p);
    free(p);
}

void remova_tudo_R(celula *lst) {
    if(lst != NULL){
        remova_tudo_R(lst->seg);
        free(lst);
    }
}