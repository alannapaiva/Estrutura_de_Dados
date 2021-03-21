#include<stdio.h>
#include<stdlib.h>
#include "arvb.h"
#include "fila.h"
#define N 5

 typedef struct fila{
	int n;
	int ini;
	int v[N];
 }Fila;


struct arvb{
	int info;
	ArvB *esq;
	ArvB *dir;
};

 
/* Função que cria uma Fila.*/ 
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

/* Testa se uma Fila é vazia.*/
 int fila_vazia(Fila *f){
	return f->n==0;
 }


/* Função que adiciona um elemento em uma Fila.*/
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

/* Função que remove um elemento de uma Fila.*/
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

/* Função que imprime os elementos de uma Fila.*/
 void fila_imprime(Fila *f){
	int i; int k;
		for(i = 0; i<f->n;i++){
		k = (f->ini+i) % N;
		printf("%d\n",f->v[k]);
	}
 }

/* Libera o espaço alocado para uma Fila.*/
 void fila_libera(Fila *f){
	free(f);
 }


/* Retorne o valor armazenado no topo da fila recebida.*/
 int fila_topo(Fila* f){
	int a;
	if(fila_vazia(f)){
		printf("Fila Vazia!!!\n");
		exit(1);
	}
	a = f->v[f->ini];
 return a;
}























ArvB* arvb_cria_vazia(void){
	return NULL;
 }
 
int arvb_vazia(ArvB *a){
	return a==NULL;
 }

ArvB* arvb_busca(ArvB *a, int c){
	if(arvb_vazia(a))
		return NULL;
	else if(a->info < c)
		return arvb_busca(a->dir,c);
	else if(a->info > c)
		return arvb_busca(a->esq,c);
	else //(a->info == c)
		return a;
}

void arvb_imprime(ArvB *a){
	if(!arvb_vazia(a)){
	arvb_imprime(a->esq);
	printf("%d ",a->info);
	arvb_imprime(a->dir);
	}
}

ArvB* arvb_insere(ArvB *a, int c){
	if(arvb_vazia(a)){
	a = (ArvB*)malloc(sizeof(ArvB));
	a->info = c;
	a->esq = NULL;
	a->dir = NULL;
	}else if(a->info > c)
	a->esq = arvb_insere(a->esq,c);
	else if (a->info < c)
	a->dir = arvb_insere(a->dir,c);
	else
	printf("\nElemento Ja Pertence a Arvore");
	return a;
}

ArvB* arvb_remove(ArvB *a, int c){
	if(!arvb_vazia(a)){
		if(a->info > c)
			a->esq = arvb_remove(a->esq,c);
		else if (a->info < c)
			a->dir = arvb_remove(a->dir,c);
		else{
			ArvB* t;
			if (a->esq == NULL){
				t = a; a = a->dir;
				free(t);
			}else if (a->dir == NULL){
				t = a; a = a->esq;
				free(t);
			}else{
				t = a->esq;
				while(t->dir!=NULL)
					t = t->dir;
				a->info = t->info; t->info = c;
				a->esq = arvb_remove(a->esq,c);
			}
		}
	}
	return a;
}

void arvb_libera(ArvB *a){
	if(!arvb_vazia(a)){
		arvb_libera(a->esq);
		arvb_libera(a->dir);
		free(a);
	}
 }

int arvb_altura(ArvB *a){
	if(arvb_vazia(a))
		return -1;
	else{
		int hSAE = arvb_altura(a->esq);
		int hSAD = arvb_altura(a->dir);
		if(hSAE > hSAD)
			return 1+hSAE;
		else
			return 1+hSAD;
	}
}

/*função que retorne a quantidade de folhas de uma árvore binária de busca que possuem no campo info um número divisível por n.*/
int qtd =0;
int folhas_div_n(ArvB* a, int n){

		if(!arvb_vazia(a)){
			if(a->dir==NULL && a->esq==NULL){
				if(a->info%(n)==0){
					qtd++;
				}
			}
		folhas_div_n(a->esq,n);
		folhas_div_n(a->dir,n);
	}
	return qtd;
}

/*saber se um nó tem 2 subarvore*/
/*função que decida se uma árvore é degenerada*/

int isdegenerada(ArvB* a){//retorna a quantidade de de pai q tem dois filhos.
int cont=0;
	if(arvb_vazia(a))//testa se a árvore é vazia 
		return NULL;
		if(!arvb_vazia(a)){
			
			 if(a->dir!=NULL && a->esq!=NULL)//verifica se ele tem filho na direita e na esquerda.
				cont++;//contador para saber quantos pais tem dois filhos.
	
			isdegenerada(a->dir);
			isdegenerada(a->esq);
		}	
	
	return cont==0;
} 


/*função que, dada uma árvore binária de busca, retorne a quantidade de nós que tenham fator de balanceamento igual a n*/

int nos_fb_n(ArvB* a, int n){
int cont=0;	

	int novaFuncao(ArvB* a, int n){
		if(!arvb_vazia(a)){//verifica se uma árvore não é vazia.
			int cont2 =0;
			if(arvb_vazia(a->esq) && arvb_vazia(a->dir)){ //verifica se os dois filhos são vazios
				cont2 = 0;
			}
	 		else{
				cont2 = (arvb_altura(a->dir) - arvb_altura(a->esq));// calcula o balanceamento 
			}
			
			novaFuncao(a->esq,n);
			novaFuncao(a->dir,n);	//para verificar todas as sub árvores.
			
			if(cont2 == n){ //verificar se é igual a n
				cont++; //contar a quantidade de nós iguais a n
			}
			return cont;
		}
	}
	return novaFuncao(a, n);	
} 


/*função que imprima os elementos em comum de duas árvores*/
void impressao_arv_elem_comuns(ArvB* a, ArvB* b){

	while(!arvb_vazia(b) && !arvb_vazia(a)){
        impressao_arv_elem_comuns(a,b->esq);
			  if(arvb_busca(a, b->info)!=NULL){
				    printf("%d \n", b->info);
				}	
      impressao_arv_elem_comuns(a,b->dir);
      break;
	} 	
}


/* função que imprima os elementos de uma árvore binária de busca por níveis.*/

void impressao_arv_niveis(ArvB* a){

	if(!arvb_vazia(a)){
		
		Fila* novaFila = fila_cria();
		fila_insere(novaFila, a );
		fila_insere(novaFila, NULL);
		int level;
		
		while(!fila_vazia(novaFila)){    
		    ArvB* arvb2 = fila_topo(novaFila);
		    a = fila_remove(novaFila);
		    if(arvb2 !=NULL){
		        printf("%d, ", arvb2->info);
		        if(arvb2->esq !=NULL){
		            fila_insere(novaFila,arvb2->esq);
		        } 
		        if(arvb2->dir !=NULL){
		            fila_insere(novaFila, arvb2->dir);
		        }
		        level = arvb_altura(a);
		        }else{
		          if(fila_vazia(novaFila)){
		          	//printf("- Nivel 0");
		            exit(1);
		          } else{
		            	fila_insere(novaFila, NULL);
		            	printf("\n");
		          	}
		        }
	    	}
	  	}
}



