#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include "ListaSequencial.h"

struct lista{
	int qtd;
	struct aluno dados MAX;
};
Lista* cria lista(){
	Lista *li;
	li = (Lista*)malloc(sizeof(struct lista));
	if(li != NULL)
		li->qtd=0;
		return li;
}
void libera_lista(Lista* li){
	free(li);
}


int main(){
	Lista *li;
	li = cria_lista();
	libera_lista(li);
}
