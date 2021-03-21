#include <stdio.h>  
#include <stdlib.h> 

int main() {       
 int x, numDiv = 0, contPrimo = 0, repetidor = comprimento(l);   
           
  for(repetidor = 2; repetidor < 1000; repetidor++){        
      numDiv = 0;            
	  for(x = 1; x <= repetidor; x++){           
	       if(repetidor % x == 0) {              
		         numDiv++;              
				   }           
				    }           
					 if(numDiv == 2)             
					    contPrimo++;          
						  } 
      
	    return 0;  
}
