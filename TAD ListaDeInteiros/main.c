#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

int main (void){
	Lista* l = lst_cria();
	l = lst_insere(l,10);
	l = lst_insere(l,20);
	l = lst_insere(l,25);
	l = lst_insere(l,30);
	l = lst_remove(l,10);
	lst_imprime(l);
	
	
 return 0;
}

