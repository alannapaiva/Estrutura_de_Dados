#include <stdio.h>
#include <stdlib.h>

//CODIGO 01
/*
	struct ponto{
		float x;
		float y;
	};
int main(){	
	struct ponto p;
	
	printf("Digite as coordenadas do ponto (x,y): ");
	scanf("%f %f", &p.x, &p.y);
	printf("O ponto fornecido foi: (%2.f, %2.f)\n", p.x, p.y);
	return 0;

} */


//CODIGO 02 - passagem de estruturas para funções
/*struct ponto{
 float x;
 float y;
};
void captura(struct ponto *pp){
 printf("Digite as coordenadas do ponto(x,y)\n:");
 scanf("%f %f", &pp->x, &pp->y);
}
void imprime(struct ponto *pp){
 printf("Ponto(%.2f,%.2f):\n",pp->x,pp->y);
}
int main (void) {
 struct ponto p;
 captura(&p);
 imprime(&p);
 return 0;
}
*/

//	CODIGO 03 - alinhamento de estruturas
#include<math.h>
/*typedef struct ponto{ //definindo os pontos
 float x;
 float y;
} Ponto;

void captura(struct ponto *pp){  //pegando os dados por referencia
 printf("Digite as coordenadas do ponto(x,y)\n:");
 scanf("%f %f",&pp->x,&pp->y);
}
//void captura(Ponto *pp); 
float distancia(Ponto *p1, Ponto *p2){
 return sqrt((p1->x - p2->x)*(p1->x - p2->x)+
 (p1->y - p2->y)*(p1->y - p2->y) );
}

int main (void) {
 Ponto p1, p2;
 captura(&p1);
 captura(&p2);
 printf("Distancia entre pontos %.1f\n",distancia(&p1,&p2));
 return 0;
} */

//CODIGO 04
//Faça uma função, conforme protótipo abaixo, que retorne 1 se um ponto está dentro de um círculo e 0 caso contrário
/*
typedef struct ponto{
	float x; float y;
	} Ponto;
typedef struct circulo{
	Ponto p; float r;
	} Circulo;
	
void capturaPonto(Ponto *pp);
void capturaCirculo(Circulo *pc);
float distancia(Ponto *p1, Ponto *p2);
int interior(Circulo *c, Ponto *p){
 float d = distancia(&c->p,p);
 return (d < c->r);
}
int main (void) {
 Ponto p; Circulo c;
 capturaPonto(&p); capturaCirculo(&c);
 if(interior(&c,&p))
 printf("Pertence ao circulo\n");
 else
 printf("Nao Pertence ao circulo\n");
 return 0;
} */

typedef struct aluno{
	int mat;
	char nome[81];
	char end[121];
	char tel[21];
} Aluno;
#define MAX 100
Aluno* tab[MAX];

void inicializa(int n, Aluno** tab){ // como a função recebe um vetor de ponteiros, seu parametro deve ser do tipo ponteiro para ponteiro
	int i;
	for(i=0;i<n;i++)
		tab[i] = NULL;
}

void preenche (int n, Aluno** tab, int i){
	if(i<0 || i>=n){
		printf("Indice fora do limite do vetor\n");
		exit(1); //aborta o programa//
	}
	if(tab[i]==NULL){
		tab[i] = (Aluno*)malloc(sizeof(Aluno));
		
	printf("Insira a matricula: ");
	scanf("%d", &tab[i]->mat);
	printf("Insira o nome: ");
	scanf(" %80[^\n]", tab[i]->nome);
	printf("Insira o endereco: ");
	scanf(" %120[^\n]", tab[i]->end);
	printf("Insira o telefone: ");
	scanf("%20[^\n]", tab[i]->tel);	
	}
}
	void imprime (int n, Aluno** tab, int i){
		if(i<0 || i>=n){
		printf("Indice fora do limite do vetor\n");
		exit(1); //aborta o programa//
	}
	if(tab[i]!=NULL){
		printf("Matricula: %d\n", tab[i]->mat);
		scanf("Nome: %s\n", tab[i]->nome);
		scanf("Endereco %s\n", tab[i]->end);
		scanf(" %s", tab[i]->tel);
	}
}
	void imprime_tudo (int n, Aluno** tab){
		int i;
		for(i=0;i<n;i++)
			imprime(i);
	}
int main (void){
	 Aluno *alunos;
	 int n,i;
	 printf("Entre com o numero de alunos:\n");
	 scanf("%d",&n);
	 alunos = (Aluno*)malloc(n*sizeof(Aluno));
	 if(alunos == NULL){
		 printf("Memoria Insuficiente!!!\n");
		 exit(1);
	}
	 inicializa(n,alunos);
	 for(i=0;i<n;i++)
		 atualiza(n,alunos,i);
		 imprime_todos(n,alunos);
		 free(alunos);
	 return 0;
}

	
	
	
	
	














