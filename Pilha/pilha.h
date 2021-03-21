#include "lista.h"

typedef struct lista Lista;
typedef struct pilha Pilha;

/*Função que cria uma pilha.*/
Pilha* pilha_cria(void);
/*Testa se uma pilha é vazia.*/
int pilha_vazia(Pilha *p);
/*Função que adiciona um elemento no topo de uma pilha.*/
void pilha_push(Pilha *p, int info);
/*Função que remove um elemento do topo de uma pilha.*/
int pilha_pop(Pilha *p);
/*Função que imprime os elementos de uma pilha;*/
void pilha_imprime(Pilha *p);
/*Libera o espaço alocado para uma pilha.*/
void pilha_libera(Pilha *p);
/* função que receba uma pilha como argumento e retorne o valor armazenado em seu topo*/
int topo(Pilha* p);
/*função para retornar o número de elementos da pilha que possuem o campo info com valor ímpar.*/
int impares(Pilha* p);
/* verificar quais os elementos em comum em duas listas empilhar em ordem crescente em uma nova pilha*/
Pilha* empilha_elem_comuns(Lista* l1, Lista* l2);
Lista* lst_insere_ordenado(Lista *l, int info);

