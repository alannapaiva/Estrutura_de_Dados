#include <stdio.h>
#include<stdlib.h>

//arquivo ListaSequencial.h
#define MAX 100
struct aluno{
	int matricula;
	char nome[30];
	float n1, n2, n3;
};
typedef struct lista Lista;
Lista* cria_lista();
void libera_lista(Lista* li);

//arquivo ListaSequencial.c
struct lista{
	int qtd;
	struct aluno dados[MAX];
};
Lista* cria_lista(){
	Lista *li;
	li = (Lista*) malloc(sizeof(struct lista));
	if(li != NULL)
		li->qtd = 0;
	return li;
	void libera_lista(Lista* li){
		free(li);
	}
}

//programa principal
Lista *li; //ponteiro li do tipo lista
li = cria_lista();
libera_lista(li);
