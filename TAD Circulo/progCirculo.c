#include<stdio.h>
#include "Ponto.c"
#include "Circulo.c"
#include "circulo.h"

int main(void){
 Ponto *p = pto_cria(2.0,1.0);
 Circulo *c = circ_cria(3.4,2.1,2.0);
 float a = circ_area(c);
 printf("Area do circulo: %.2f\n",a);
 	if(circ_interior(c,p)){
 		printf("Ponto dentro do Circulo\n");
 	}
 	else{
	 	printf("Ponto fora do Circulo\n");
	 	pto_libera(p); circ_libera(c);
	 }
 return 0;
}

