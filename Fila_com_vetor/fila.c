#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include "fila1.h"
#define N 5

typedef struct fila{
	int n;
	int ini;
	int v[N];
}Fila;

/*Função que cria uma Fila.*/
Fila* fila_cria(void){
Fila *f = (Fila*)malloc(sizeof(Fila));
	if(f==NULL){
		printf("Memoria insuficiente!!!\n");
		exit(1);
 	}
	f->n = 0;
	f->ini = 0;
 return f;
}

/*Função que adiciona um elemento em uma Fila.*/
void fila_insere(Fila *f, int info){
int fim;
	if(f->n==N){
		printf("Capacidade da Fila Estourou!!!\n");
	exit(1);
	}
	fim = (f->ini + f->n) % N;
	f->v[fim]= info;
	f->n++;
}

/*Testa se uma fila é vazia.*/
int fila_vazia(Fila *f){
 	return f->n==0;
}

/*Função que remove um elemento de uma fila.*/
int fila_remove(Fila *f){
 int a;
	if(fila_vazia(f)){
 		printf("Fila Vazia!!!\n");
 	exit(1);
 	}
	a = f->v[f->ini];
	f->ini = (f->ini+1)%N;
	f->n--;
 return a;
}

/*Implementação de Fila com Vetor Função Imprime e Libera*/
void fila_imprime(Fila *f){
 int i; int k;
 	for(i = 0; i<f->n;i++){
 		k = (f->ini+i) % N;
 		printf("%d\n",f->v[k]);
 	}
}
void fila_libera(Fila *f){
 free(f);
}

/* Função para retornar o número de elementos da fila com valor maior que n*/
int qtd_maior(Fila* f, int n){
int i;
int k;
int qtd = 0;
	for(i = 0; i<f->n;i++){
		k = (f->ini+i) % N; // k vai receber a posição
		if(f->v[k]>n){
			qtd++;
		}
	}
		return qtd;
}

/*Função que cria uma nova fila e inverte*/
Fila* inverte(Fila* f){
int i;
int k;
Fila* novaFila = fila_cria();
	
	for(i=f->n-1;i>=0;i--){
		k = (f->ini+i) % N;
		fila_insere(novaFila, f->v[k]);
		}
		return novaFila;
}

/*Função para retornar o número de elementos com valor par*/
int pares(Fila* f){
int i;
int k;
int qtd = 0;
	for(i = 0; i<f->n;i++){
		k = (f->ini+i) % N;
		if((f->v[k])%2==0){
			qtd++;
		}
	}	
	return qtd;
}








