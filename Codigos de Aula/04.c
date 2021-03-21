#include<stdio.h>
#include<stdlib.h>

float somatorio(int m, float v[]){ 
	int i; float s =0.0F;
	for(i=0;i<m;i++)
	s += v[i];
return s;

 }

int main (void) {
 int n; int i; float *v; float s;
 scanf('%d',&n);
 v = (float*) malloc(n*sizeof(float));
 for(i=0; i<n; i++)
 scanf('%f',&v[i]);
 s = somatorio(n,v);
 printf('somatorio=%.1f,media=%.1f',s,s/n);
 return 0;
}
