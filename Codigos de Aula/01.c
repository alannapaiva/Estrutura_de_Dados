
#include<stdio.h>

void somaprod(int x, int y, int *s, int *p){
 *s = x+y;
 *p = x*y;
}

int main (void) {
 int s, p;
 somaprod(3,5,&s,&p);
 printf("soma = %d, prod = %d",s,p);
 return 0;
}
