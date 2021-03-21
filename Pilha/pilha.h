#include "lista.h"

typedef struct lista Lista;
typedef struct pilha Pilha;

/*Fun��o que cria uma pilha.*/
Pilha* pilha_cria(void);
/*Testa se uma pilha � vazia.*/
int pilha_vazia(Pilha *p);
/*Fun��o que adiciona um elemento no topo de uma pilha.*/
void pilha_push(Pilha *p, int info);
/*Fun��o que remove um elemento do topo de uma pilha.*/
int pilha_pop(Pilha *p);
/*Fun��o que imprime os elementos de uma pilha;*/
void pilha_imprime(Pilha *p);
/*Libera o espa�o alocado para uma pilha.*/
void pilha_libera(Pilha *p);
/* fun��o que receba uma pilha como argumento e retorne o valor armazenado em seu topo*/
int topo(Pilha* p);
/*fun��o para retornar o n�mero de elementos da pilha que possuem o campo info com valor �mpar.*/
int impares(Pilha* p);
/* verificar quais os elementos em comum em duas listas empilhar em ordem crescente em uma nova pilha*/
Pilha* empilha_elem_comuns(Lista* l1, Lista* l2);
Lista* lst_insere_ordenado(Lista *l, int info);

