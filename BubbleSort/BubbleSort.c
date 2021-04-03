#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int *cria_vetor(int n){
	int *vetor;
	int i;
	vetor=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		vetor[i]=rand();
	}
	return vetor;	
}
void BubbleSort(int n, int *v){
	int i, j, temp;
	for(i=n-1; i>0; i--)
		for(j=0; j<i; j++)
			if(v[j]> v[j+1]){
				temp = v[j]; // Troca
				v[j] = v[j+1];
				v[j+1] = temp;
			}
}



