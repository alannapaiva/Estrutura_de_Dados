#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "pilha.h"


int main(void){
 int a;
 Pilha* p1 = pilha_cria();
 pilha_push(p1,10);
 pilha_push(p1,20);
 pilha_push(p1,25);
 pilha_push(p1,30);
 a = pilha_pop(p1);
 printf("Elemento removido da pilha p1: %d\n",a);
 printf("Elemento no topo da pilha p1: %d\n",topo(p1));
 printf("Qde elems impares na pilha p1: %d\n",impares(p1));

 Lista* l1=lst_cria();
 l1=lst_insere(l1,4);
 l1=lst_insere(l1,5);
 l1=lst_insere(l1,6);
 l1=lst_insere(l1,7);

 Lista* l2=lst_cria();
 l2=lst_insere(l2,5);
 l2=lst_insere(l2,6);
 l2=lst_insere(l2,7);
 l2=lst_insere(l2,8);
 Pilha* p2= empilha_elem_comuns(l1,l2);
 pilha_imprime(p2);
 lst_libera(l1);
 lst_libera(l2);
 pilha_libera(p1);
 pilha_libera(p2);
 system("PAUSE");
 return 0;
}
