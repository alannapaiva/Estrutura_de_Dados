#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct ponto Ponto;
 /*Fun��o que cria um Ponto com as coordenadas (x,y)*/
 Ponto* pto_cria(float x, float y);
 /*Fun��o que libera a mem�ria de um ponto criado*/
 void pto_libera(Ponto *p);
 /*Fun��o que acessa as coordenadas de um ponto*/
 void pto_acessa(Ponto *p, float *x, float *y);
/*Fun��o que atribui novos valores �s coordenadas
(x,y)*/
 void pto_atribui(Ponto *p, float x, float y);
/*Fun��o que calcula a dist�ncia entre dois pontos*/
 float pto_distancia(Ponto *p1, Ponto *p2);

