#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arquivo.h"

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

void InsertionSort (int n, int *v){
    int j, i, temp;
    for (i = 0; i < n; i++){
        j = i;
        while (j > 0 && v[j] < v[j-1]){
			temp = v[j];
	    	v[j] = v[j-1];
	    	v[j-1] = temp;
			j--;
        }
    }
}

void QuickSort(int n, int *v){
	if(n>1){
		int x = v[0];
		int a =1; int b = n-1;
		while(1){
			while(a<n && v[a] <=x) a++;
				while(v[b]>x) b--;
					if(a<b){
						int temp = v[a];
						v[a] = v[b];
						v[b] = temp;
						a++;
						b--; 
					}else{
						break;
					}
		}
		v[0] = v[b];
		v[b] = x; 
		QuickSort(b,v);
		QuickSort(n-a,&v[a]);
	}
}
                                 
void cresce_heap(int e, int d, int *vetor){
	int i,j,naoachou,x;
	i=e;
	j=2*i;
	naoachou=1;
	x=vetor[i-1];
	while((j<=d)&&(naoachou==1)){
		if(j,d)
			if(vetor[j-1]<vetor[j]) j++;
		if(x<vetor[j-1]){
			vetor[i-1]=vetor[j-1];
			i=j;
			j=2*i;
		}else
			naoachou=0;
	}
	vetor[i-1]=x;
}
void mergeSort_intercala(int *v, int esq, int meio, int dir) {
	int i, j, k;
	int a_tam = meio-esq+1;
	int b_tam = dir-meio;
	int *a = (int*) malloc(sizeof(int) * a_tam);
	int *b = (int*) malloc(sizeof(int) * b_tam);
		for (i = 0; i < a_tam; i++) a[i] = v[i+esq];
		for (i = 0; i < b_tam; i++) b[i] = v[i+meio+1];
		for (i = 0, j = 0, k = esq; k <= dir; k++) {
			if (i == a_tam) v[k] = b[j++];
			else if (j == b_tam) v[k] = a[i++];
			else if (a[i] < b[j]) v[k] = a[i++];
			else v[k] = b[j++];
		}
	free(a); free(b);
}
void mergeSort_ordena(int *v, int esq, int dir) {
	if (esq == dir)
		return;
	int meio = (esq + dir) / 2;
	mergeSort_ordena(v, esq, meio);
	mergeSort_ordena(v, meio+1, dir);
	mergeSort_intercala(v, esq, meio, dir);
	return;
}
void mergeSort(int n, int *v) {
	mergeSort_ordena(v, 0, n-1);
}	
void hepsort(int n,int *v){
	int e, d, x,i;
	d= n;
	e=(d/2);
	while(e>0){
		cresce_heap(e,d,v);
		e--;
	}
	while(d>=1){
		x= v[0];
		v[0]=v[d-1];
		v[d-1]=x;
		d--;
		cresce_heap(1,d,v);
	}
}

