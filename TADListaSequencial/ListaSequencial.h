#include <stdio.h>
#include <stdlib.h>
#define MAX 100

struct aluno{
	int matricula;
	char nome[30];
	float n1, n2, n3;
};
typedef struct lista Lista;
Lista* cria_lista();
void libera_lista(Lista* li);

