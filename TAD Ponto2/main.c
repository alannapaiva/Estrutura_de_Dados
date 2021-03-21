#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 Ponto *p1 = pto_cria(2.0,1.0);
	 Ponto *p2 = pto_cria(3.4,2.1);
	 float d = pto_distancia(p1,p2);
	 printf("Distancia entre pontos: %f\n",d);
	 pto_libera(p1); pto_libera(p2);
	 return 0;
 
 }

