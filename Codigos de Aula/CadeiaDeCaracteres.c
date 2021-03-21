#include <stdio.h>
#include <stdlib.h>

//CODIGO 03
/*
char maiscula( char c){
		if(c>='a' && c<='z'){ //verifica se a letra é maiscula
			c = c-'a'+'A'; //converte para maiscula 
		}
		return c;
	}
	
int main(){
	
	char c = 'b';
	printf("%c", maiscula(c));
}
	
//CODIGO 01	
//	char c = 'a';
//	printf("%d %c\n", c, c);


//CODIGO 02	
/*	int digito (char c){
		if((c>='0')&&(c<='9'))
		return 1;
		else
		return 0;
	} 
} */


//CODIGO 04 
/*int main(void){
	char cidade[]= "Rio";
	printf("%s \n", cidade);
	return 0;
} */

//CODIGO 05
/*int main(){
	char cidade[81];	
	scanf(" %80[^\n]", cidade); //ler nomes compostos, %80 serve para ler no máx 80 caracteres
	printf("%s", cidade);
} */


//CODIGO 06
/*int comprimento(char* s){
	int i;
	int n=0; //contador
	for(i=0;s[i] !='\0';i++)
		n++;
	
	return n;
} 
//int comprimento(char* s);
int main(void){
	int tam;
	char cidade[] = "Rio de Janeiro";
//	tam = comprimento(cidade);
	printf("A string \"%s\" tem %d caracteres\n", cidade, comprimento(cidade));
	return 0;	
} */


//CODIGO 07 - implementação de uma função que compara caractere por caractere
/*int compara(char* s1, char* s2){
	int i;
	//compara caractere por caratere
	for(i=0;s1[i]!='\0'&& s2[i]!='\0';i++){
		if(s1[i]< s2[i])
			return -1;
		else if(s1[i]> s2[i])
			return 1;
	}
	//compara se cadeias tem o mesmo comprimento
	if(s1[i]==s2[i])
		return 0; //cadeia siguais
	else if (s2[i] != '\0')
		return -1; //s1 é menor, pois tem menos caracteres
	else
		return 1; //s2 é menos, pois tem menos caracteres
}
*/


//CODIGO 08
/*int main(){
	char *cidade; //declara um ponteiro para char
	char s1[] = "Rio de Janeiro";
	cidade = "Rio de Janeiro"; //cidade recebe o endereço da cadeira Rio
	printf("%s \n", cidade);
	s1[0] = 'X'; //como s1 é um vetor local, podemos alterar o valor de seus elementos 
	printf("%s \n", s1);
	return 0;
} */


//CODIGO 09
#define MAX 50
/*char* alunos[MAX];

char* lelinha(void){
	char linha[121]; //variavel axuliar para ler linha
	printf("Digite um nome: ");
	scanf(" %120[^\n]", linha);
	return duplica(linha);
}

int lenomes (char** alunos){
	int i, n;
	do{
		printf("Digite o numero de alunos: ");
		scanf("%d", &n);
	} while (n>MAX);
//função para capturar os nomes dos alunos
for(i=0;i<n;i++)
	alunos[i] = lelinha();
	return n;
}
//função para liberar os nomes alocado
void liberanomes (int n, char** alunos){
	int i;
	for(i=0;i<n;i++){
		free(alunos[i]);
	}
}
//função para imprimir os nomes
void imprimenomes (int n, char** alunos){
	int i;
	for(i=0;i<n;i++){
		printf("%s\n", alunos[i]);
	}
}
#define MAX 50

int main(void){
	char* alunos[MAX];
	int n = lenomes(alunos);
	imprimenomes(n, alunos);
	liberanomes(n, alunos);
	return 0;
} */



//exemplo de ponteiros para ponteiros
/*int main(void)
{
    int *ponteiro, **ponteiroDoPonteiro, valor;
    valor = 50;
    ponteiro = &valor;
    ponteiroDoPonteiro = &ponteiro;
    printf("\nValor de ponteiroDoPonteiro: %p\nEndereço de memoria de ponteiro: %p\nValor de ponteiro: %p\nEndereco de memoria de valor: %p\nValor: %d", ponteiroDoPonteiro, &ponteiro, ponteiro, &valor, valor);
    return 0;
} */







