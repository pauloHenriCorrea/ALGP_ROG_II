Para criar funções em C++, podemos seguir os seguintes passões:
    => Primeiramente é recomendado que se faça um protótipo de sua função, nesse protótipo espera-se que seja definido os tipos e os nomes dos seus parâmetros;
        Exemplo criação de um protótipo:
            int prototipo(int parametro_1, int parametro_2, ..., int parametor_n);
    => Chamada: a chamada de função é o momento que você utilizada;
    => Definição do que a função ira fazer;


// É sempre interessante você definir as suas structs deve ficar antes dos protótipos e da sua função main
// Como se fosse o protótipo. Uma declaração de um novo tipo de dado
typedef struct
{
    int num;
    char titular[35];
    float saldo;
} banco;

int main()
{
    // Declaração de uma variável do tipo banco.
    banco conta;
    return 0;
}