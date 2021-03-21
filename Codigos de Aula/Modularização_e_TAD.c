#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h" //inclui os prototipos

//	A conven��o em linguagem C � preparar dois arquivos para implementar um "TAD"
//	Arquivo ".H":	prot�tipos das fun��es, tipos de ponteiros, e dados globalmente acess�vel	
//	Arquivo ".C": declara��o do tipo de dados e implementa��o das duas fun��es.	
//	Assim separamos o "conceito" (defini��o do tipo) de sua "implementa��o"



int main(){
	float d;
	Ponto *p, *q;
	
	p= pto_cria(10,21);
	q = pto_cria(7,25);
	
	d= pto_distancia(p,q);
	printf("Distancia entre pontos: %f\n", d);
	pto_libera(q);
	pto_libera(p);
	
	return 0;
}



/*
Ponto* pto_cria(float x, float y){
	Ponto* p = (Ponto*) malloc(sizeof(Ponto));
	if(p!=NULL){
		p-> x = x;
		p->y = y;
	}
	return p;
}

void pto_libera(Ponto* p){
	free(p);
}
//recupera, por referencia, o valor de um ponto
void pto_acessa(Ponto* p, float* x, float* y){
	*x = p->x;
	*y = p->y;
// atribui a um ponto as coordenadas x e y
void pto_atrbui(Ponto*, float x, float y){
	p->x=x;
	p->y=y;
}
//calcula a distancia entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2){
	float dx = p1->x - p2->x;
	float dy = p1->y - p2->y;
	return sqrt(dx * dx +dy *dy);
}
} */


/*
int main(){
	
	//Exemplo de "TAD": um ponto definido por suas coordenadas "x" e"y"
	struct ponto{
		float x;
		float y;
	};
	*/
	
	/*1� passo: definifir o arquivo ".H"
	- prototipos das fun��es
	- tipos de ponteiro
	- dados globalmente acessivel 	*/
	
	//Arquivo Ponto.h
//	typedef struct ponto Ponto;
	
	//Cria um novo ponto
//	Ponto * pto_cria(float x, float y);
	// Libera um ponto
//	void pto_libera(Ponto* p);
	//Acessa os valores x e y de um ponto
//	void pto_acessa(Ponto* p, float* x, float* y);
	//Atribui os valores de x e y a um ponto
//	void pto_atrivui(Ponto* p, float x, float y);
	//Calcula a distancia entre dois pontos
//	float pto_distancia(Ponto* p1, Ponto* p2);
	
	
	
	
	
	
	
	
	

