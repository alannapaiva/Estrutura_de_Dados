#include <stdio.h>
#include <stdlib.h>
#include "arvb.h"

int main(void){

 ArvB* arv1 = arvb_cria_vazia();

 arv1=arvb_insere(arv1,41);
 arv1=arvb_insere(arv1,7);
 arv1=arvb_insere(arv1,55);
 arv1=arvb_insere(arv1,71);
 arv1=arvb_insere(arv1,40);
 arv1=arvb_insere(arv1,10);
 arv1=arvb_insere(arv1,6);
 arv1=arvb_insere(arv1,66);


 printf("Qtd folhas div por 3: %d\n",folhas_div_n(arv1,3));
 printf("Arv1 eh degenerada? %d\n",isdegenerada(arv1));
 
 printf("Nos com FBs iguais a 1: %d\n",nos_fb_n(arv1,1));
 printf("Nos com FBs iguais a 2: %d\n",nos_fb_n(arv1,2));

 ArvB* arv2 = arvb_cria_vazia();

 arv2=arvb_insere(arv2,7);
 arv2=arvb_insere(arv2,8);
 arv2=arvb_insere(arv2,9);
 arv2=arvb_insere(arv2,11);
 arv2=arvb_insere(arv2,71);
 printf("Arv2 eh degenerada? %d\n",isdegenerada(arv2));
 printf("\n");
 impressao_arv_elem_comuns(arv1,arv2);
 printf("\n");
 impressao_arv_niveis(arv1);

 arvb_libera(arv1);
 arvb_libera(arv2);

 system("PAUSE");
 return 0;
}
