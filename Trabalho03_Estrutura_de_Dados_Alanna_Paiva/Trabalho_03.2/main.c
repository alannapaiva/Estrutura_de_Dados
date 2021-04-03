#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "arquivo.h"

int main(){

int cont, aux=0, i2 = 5;
clock_t t1,t2,t3,t4, t5;
	int *v, cont2;
	
	int i = 1;
	for(cont=1; cont<=5; cont++){//para poder testa todos os valores dados na questão
		printf("\n\tTENTATIVA %d\n",cont);
		printf("\nExecutando BublleSort\n");
		
		while(1){
			int n = pow(10,i);
			v = (int*)(malloc(n*sizeof(int)));
			
			for(cont2 = 0; cont2!= n; cont2++){
				v[cont2] = rand();
			}
			t1 = clock();	
			BubbleSort(n,v);//testando bubllesort
			t1 = clock()-t1;//termina o tempo
			
			
			printf("O vetor 10^%i demora: %f milissegundos\n",i, ((float)t1*1000)/(CLOCKS_PER_SEC));
			
			free(v);
			i++;
	
			if(aux == 2 || i>i2){
				i = 1;
				break;
			}
		}

	
	
		printf("\nExecutando InsertionSort\n");
			
		while(1){	
			int n = pow(10,i);
			v = (int*)(malloc(n*sizeof(int)));
			
			for(cont2 = 0; cont2!= n; cont2++){
				v[cont2] = rand();
			}
			t2 = clock();	
			InsertionSort(n,v);//testando insertionsort
			t2 = clock()-t2;//termina o tempo
			
			
			printf("O vetor 10^%i demora: %f milissegundos\n",i, ((float)t2*1000)/(CLOCKS_PER_SEC));
			
			free(v);
			i++;
	
			if(aux == 2 || i>i2){
				i = 1;
				break;
			}
		}
	
	
	
		printf("\nExecutando QuickSort\n");
			
		while(1){
			int n = pow(10,i);
			v = (int*)(malloc(n*sizeof(int)));
				
			for(cont2 = 0; cont2!= n; cont2++){
				v[cont2] = rand();
			}
			t3 = clock();	
			QuickSort(n,v);//testando quicksort
			t3 = clock()-t3;//termina o tempo
	
	
			printf("O vetor 10^%i demora: %f milissegundos\n",i, ((float)t3*1000)/(CLOCKS_PER_SEC));
			free(v);
			i++;
	
			if(aux == 2 || i>i2){
				i = 1;
				break;
			}
		}
	
	
	
		printf("\nExecutando MergeSort\n");

		while(1){
			int n = pow(10,i);
			v = (int*)(malloc(n*sizeof(int)));
				
			for(cont2 = 0; cont2!= n; cont2++){
				v[cont2] = rand();
			}
			t4 = clock();	
			mergeSort(n,v);//testando mergesort
			t4 = clock()-t4;//termina o tempo
	
			printf("O vetor 10^%i demora: %f milissegundos\n",i, ((float)t4*1000)/(CLOCKS_PER_SEC));
			
			free(v);
			i++;
	
			if(aux == 2 || i>i2){
				i = 1;
				break;
			}
		}
		
	
		printf("\nExecutando HeapSort\n");
			
		while(1){
			
			int n = pow(10,i);
			v = (int*)(malloc(n*sizeof(int)));
				
			for(cont2 = 0; cont2!= n; cont2++){
				v[cont2] = rand();
			}
			t5 = clock();	
			hepsort(n,v);//testando hepsort
			t5 = clock()-t5;//termina o tempo
	
			printf("O vetor 10^%i demora: %f milissegundos\n",i, ((float)t5*1000)/(CLOCKS_PER_SEC));
			
			free(v);
			i++;
	
			if(aux == 2 || i>i2){
				i = 1;
				break;
			}
		}
	}
}

