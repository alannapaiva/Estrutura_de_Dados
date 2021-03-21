#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "ponto.h"

 typedef struct circulo Circulo;
 /*Função que cria e retorna um círculo com centro (x,y) e
raio r */
 Circulo* circ_cria (float x, float y, float r);
 /* Função que libera a memória de um círculo previamente
criado */
 void circ_libera (Circulo* c);
 /* Função que calcula o valor da área do círculo */
 float circ_area (Circulo* c);
 /* Função que verifica se um dado ponto p está dentro do
círculo */
 int circ_interior (Circulo* c, Ponto* p);
