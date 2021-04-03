#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "filaprio.h"

struct paciente{
	char nome[30];
	int prio;
};

//def do tipo fila de prioridade

struct fila_prioridade{
	int qtd;
	struct paciente dados[MAX];
};

int insere_FilaPrio(FilaPrio* fp, char *nome, int prio){
	if(fp==NULL)
		return 0;
		if(fp->qtd == MAX) //fila cheia
			return 0;
	strcpy(fp->dados[fp->qtd].nome, nome );
	fp->dados[fp->qtd].prio = prio;
	promoverElemento(fp, fp->qtd);
	return 1;	
}

void promoverElemento(FilaPrio* fp, int filho){
	int pai;
	struct paciente temp;
	pai = (filho -1)/2;
	while((filho>0) && (fp->dados[pai].prio <= fp->dados[filho].prio))
		temp = fp->dados[filho];
		fp->dados[filho] = fp->dados[pai];
		fp->dados[pai] = temp;
		
		filho = pai;
		pai = (pai -1)/2;
	
}

void rebaixarElemento(FilaPrio* fp, int pai){
	struct paciente temp;
	int filho = 2*pai+1;
	while(filho<fp->qtd){
		if(filho < fp->qtd-1)
			if(fp->dados[filho].prio < fp->dados[filho+1].prio)
				filho++;
		
		if(fp->dados[pai].prio >= fp->dados[filho].prio)
			break;
		
		temp = fp->dados[filho];
		fp->dados[filho] = fp->dados[pai]; //trocar pai e filho de lugar 
		fp->dados[pai] = temp;
		
		filho = pai;
		filho = 2*pai+1; //calcular novo filho
	}
}

int consulta_FilaPrio(FilaPrio* fp, char* nome){
	if(fp==NULL || fp->qtd == 0)
		return 0;
		strcpy(nome, fp->dados[0].nome);
		return 1;
}

int remove_FilaPrio(FilaPrio* fp){
	if(fp == NULL)
		return 0;
	if(fp->qtd ==0)
	return 0;
	
	fp->qtd--;
	fp->dados[0] = fp->dados[fp->qtd];
	rebaixarElemento(fp,0);
	return 1;	
}
