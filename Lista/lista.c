#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista{
	int info;
	Lista *prox;
};

/* Cria uma lista vazia.*/
Lista* lst_cria(){
	return NULL;
}

/* Testa se uma lista � vazia.*/
int lst_vazia(Lista *l){
	return (l==NULL);
}

/* Insere um elemento no in�cio da lista.*/
Lista* lst_insere(Lista *l, int info){
	
	Lista* ln = (Lista*)malloc(sizeof(Lista));
	ln->info = info;
	ln->prox = l;
	return ln;
}
 
 /* Busca um elemento em uma lista.*/
Lista* lst_busca(Lista *l, int info){
	Lista* lAux = l;
	while(lAux!=NULL){
		if(lAux->info == info)
			return lAux;
		lAux = lAux->prox;
	}
	return NULL;
}

/* Imprime uma lista.*/
void lst_imprime(Lista *l){	
	Lista* lAux = l;
	while(lAux!=NULL){
		printf("Info: %d\n",lAux->info);
	lAux = lAux->prox;
	}
}

/* Imprime uma lista invertida.*/
void lst_imprime_invertida_rec(Lista* l){
	if(lst_vazia(l))
		return;
	else{
		lst_imprime_invertida_rec(l->prox);
		printf("Info: %d\n",l->info);
	}
}

/* Imprime uma lista invertida.*/
void lst_invertida_rec(Lista* l){
	if(lst_vazia(l))
		return;
	else{
		lst_invertida_rec(l->prox);
		l = l->info;
	}
}


/*Remove da lista*/ 
Lista* lst_remove(Lista *l, int info){
	if(l!=NULL){
		Lista* lAux = l->prox;
		if(l->info==info){
			free(l);
			return lAux;
		}else{
			Lista* lAnt = l;
			while(lAux!=NULL ){
				if(lAux->info == info){
					lAnt->prox = lAux->prox;
					free(lAux);
					break;
				}else{
					lAnt = lAux;
					lAux = lAux->prox;
				}
			}
		}
	}
	return l;
}

/* Remove um elemento de uma lista recursivamente.*/
Lista* lst_remove_rec(Lista *l, int info){
	if(!lst_vazia(l))
		if(l->info==info){
			Lista* lAux = l;
			l = l->prox;
			free(lAux);
		} else {	
			l->prox = lst_remove_rec(l->prox,info);
		}
		
	return l;
}

/* Libera o espa�o alocado por uma lista.*/
void lst_libera(Lista *l){
	Lista* lProx;
	while(l!=NULL){
		lProx = l->prox;
		free(l);
		l = lProx;
	}
}

/* Fun��o para achar a quantidade de n�.*/
int comprimento(Lista* l){
	Lista* aux = l;
	int cont = 0;
	while(aux!=NULL){// loop at� a lista apontar para o NULL.
		cont++;
		aux=aux->prox;
	}
	return cont;
}

/*Fun��o para achar a qtd do n�mero de n�s menor que n*/
int menores(Lista* l, int n){
	Lista* menor = l;
	int cont = 0;
	while(menor!=NULL){// loop at� a lista apontar para o NULL.
		if(menor->info<n){// testa se o n�mero � menor que n.
			cont++;
		}
		menor=menor->prox;
	}
	return cont;
}

/*Fun��o para calcular a soma dos valores de todos os n�s*/
int soma(Lista* l){
	Lista* soma = l;
	int sm=0;
	while(soma!=NULL){// loop at� a lista apontar para o NULL.
		sm += soma->info;// somar� todos n�meros da lista.
		soma=soma->prox;
	}
	return sm;
}

/*Retornar numero de n�s da lista que cont�m numero primo*/
int primos(Lista* l){
	Lista* primo = l;
	int qtdPrimos = 0;
	int cont;
	int cont3 = comprimento(l);
	while(primo!=NULL){// testar todos os n�meros. 
		int cont2 = 0;
		for(cont=1;cont3>cont-1;cont++){// loop para testa todas divis�es do intervalo, para saber se � primo.
			if(primo->info % cont==0){
				cont2++;
			}
		}
		if(cont2==2){ //verifica se o numero � primo
			qtdPrimos++;
		}
		primo=primo->prox;
	}
	return qtdPrimos;
}

Lista* lst_conc(Lista* l1, Lista* l2){// fun��o que concatena uma lista na outra
	Lista* list1 = lst_cria();
	Lista* list2 = lst_cria();
	Lista* aux = l1;
	Lista* aux2 = l2;
	if(l2 ==NULL && l1 == NULL){// testa se as listas n�o s�o NULL.
		return NULL;
	}
	if(l1==NULL){// testa se a primeira lista � NULL.
		return l2;
	}
	if(l2 == NULL){//testa se a segunda lista � NULL.
		return l1;
	}while(aux != NULL){// loop para inseria os valores da lista 1 em uma nova lista.
		list1 = lst_insere(list1,aux->info);
		aux = aux->prox;
	}
	while(aux2 != NULL){// loop para inseria os valores da lista 2 em uma nova lista.
		list2 = lst_insere(list2,aux2->info);
		aux2 = aux2->prox;
	}
	
	while(list1 != NULL){// loop para ser armazenada em uma nova lista todos os valores
		list2 = lst_insere(list2,list1->info);
		list1 = list1->prox;
	}
	return list2;
}


Lista* lst_diferenca(Lista* l1, Lista* l2){
    Lista* l =l1;
    int i = 0;
    Lista* ll = l2;
    int v[comprimento(l)];
    while(l != NULL){
        while(ll != NULL){
            if(l->info == ll->info){
                v[i] = ll->info;
                i++;
            }
            ll = ll->prox;
        }
        ll = l2;
        l = l->prox;
    }
    for(i =0;i<2;i++){
	    l1 = lst_remove(l1,v[i]);
    }
    return l1;
}


