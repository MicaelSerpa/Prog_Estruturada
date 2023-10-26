#include <stdio.h>
#include <stdlib.h>

#include "Micael_Serpa.h"

int primo(int numero) {
	
	int i;
	
    if (numero <= 3) {
    	
        return numero > 1;
        
    }
    
    if (numero % 2 == 0 || numero % 3 == 0) {
    	
        return 0;
        
    }
    
    for ( i = 5; i * i <= numero; i += 6) {
    	
        if (numero % i == 0 || numero % (i + 2) == 0) {
        	
            return 0;
            
        }
        
    }
    
    return 1;
}


int menor_numero(int primeiroNumero, int segundoNumero) {
	
    if (primeiroNumero < segundoNumero) {
    	
        return primeiroNumero;
        
    } 
	else {
				
        return segundoNumero;
    }
    
}

