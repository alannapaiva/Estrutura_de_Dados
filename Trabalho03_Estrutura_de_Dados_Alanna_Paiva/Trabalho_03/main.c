#include <stdio.h>
#include <stdlib.h>
#include "filaprio.h"

int main(void){
	
 FilaP* fp = filap_cria();
 max_heap_insert(fp,44);
 max_heap_insert(fp,55);
 max_heap_insert(fp,21);
 max_heap_insert(fp,98);
 max_heap_insert(fp,92);
 max_heap_insert(fp,64);
 max_heap_insert(fp,42); 
 
 
 printf("Prioridade: %d\n", heap_maximum(fp));
 int a = heap_extract_max(fp);
 printf("Prioridades: %d e %d\n", a, heap_maximum(fp)); 
 a = heap_extract_max(fp);
 printf("Prioridade: %d e %d\n", a, heap_maximum(fp));
 heap_increase_key(fp,2,10);
 printf("Elem. maior prioridade: %d\n", heap_maximum(fp));
 heap_increase_key(fp,2,100);
 printf("Elem. maior prioridade: %d\n", heap_maximum(fp));
 system("PAUSE");
 return 0;
 
}

