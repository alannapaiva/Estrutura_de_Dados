#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct ponto Ponto;
 /*Função que cria um Ponto com as coordenadas (x,y)*/
 Ponto* pto_cria(float x, float y);
 /*Função que libera a memória de um ponto criado*/
 void pto_libera(Ponto *p);
 /*Função que acessa as coordenadas de um ponto*/
 void pto_acessa(Ponto *p, float *x, float *y);
/*Função que atribui novos valores às coordenadas
(x,y)*/
 void pto_atribui(Ponto *p, float x, float y);
/*Função que calcula a distância entre dois pontos*/
 float pto_distancia(Ponto *p1, Ponto *p2);

