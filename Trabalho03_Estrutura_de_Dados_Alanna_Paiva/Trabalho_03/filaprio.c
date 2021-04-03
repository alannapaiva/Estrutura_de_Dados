#include<stdio.h>
#include<stdlib.h>
#include "filaprio.h"

#define MAX 10
struct filap{
	int v[MAX];
	int t_heap;
};

/*cria uma fila vazia.*/
FilaP* filap_cria(){
    FilaP* f = (FilaP*)malloc(sizeof(FilaP));
	if(f==NULL){
		printf("MEMORIA INSUFICIENTE!!!\n");
		exit(1);
	}
	f->t_heap = 0;
	return f;
}

int filap_vazia(FilaP* f){
  return f->t_heap == 0;
}

int heap_maximum(FilaP* f){
	if(filap_vazia(f)){
    	printf("A fila esta vazia!\n");
    	return 0;
  }

  return f->v[0]; //o elemento de maior prioridade sempre está no início
}

void max_heapify(FilaP* f, int i){
	int m, aux;
	int l = (2*i + 1); 
	int r = (2*i + 2);

	if( (l <= f->t_heap) && (f->v[l] > f->v[i])){
		m = l;
	}else
		m = i;
	
	if( (r <= f->t_heap) && (f->v[r] > f->v[m]))
		m = r;
		
	if(m != i){
		aux = f->v[i];
		f->v[i] = f->v[m];
		f->v[m] = aux;
		max_heapify(f, m);
	}
}

/*retira o elemento de maior chave e retorna ele*/
int heap_extract_max(FilaP* f){
	int max;
	if(f->t_heap < 1){
		printf("Erro: heap underflow\n");
		exit(1);
	}
	
	max = f->v[0];//armazena a maior prioridade
	f->v[0] = f->v[(f->t_heap-1)]; 
	f->t_heap--;
	//f->t_heap = (f->t_heap - 1);
	max_heapify(f, 0);
	return max;
}



/*modifica a prioridade de determinado elemento no índice ind na fila (apenas se chave for maior)*/
#define PARENT(i) (i-1)/2
void heap_increase_key(FilaP* f, int ind, int chave){
	if(!filap_vazia(f)){
		int aux;
			
		if (chave < f->v[ind]){ 
			printf("Erro: Nova chave eh menor que a chave atual!\n");
		}
	
		f->v[ind] = chave;
		while(ind>0 && f->v[PARENT(ind)] < f->v[ind]){
	    	aux = f->v[ind];
	    	f->v[ind] = f->v[PARENT(ind)];
	    	f->v[PARENT(ind)] = aux; 
	    		
	    	ind = PARENT(ind);
			}
	}
}

/*insere um novo elemento na fila com prioridade chave.*/
void max_heap_insert(FilaP* f, int chave){
	f->t_heap = (f->t_heap + 1);
	f->v[f->t_heap-1] = -999999999;//valor arbitrario 
	heap_increase_key(f, f->t_heap-1, chave);
}



