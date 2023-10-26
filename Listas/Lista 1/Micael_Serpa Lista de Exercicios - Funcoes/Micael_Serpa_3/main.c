#include <stdio.h>
#include <stdlib.h>

#include "Micael_Serpa.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
 
 int numero, numero1, numero2;
 int menor, maior;
 
    printf("Digite o primeiro numero: ");
    
    scanf("%d", &numero1);
    
    printf("Digite o segundo numero: ");
    
    scanf("%d", &numero2);

    menor = menor_numero(numero1, numero2);
    
    
    
    if (numero1 > numero2) {
    	
    maior = numero1;
    
} 

else {
	
    maior = numero2;
    
}
    
    
    printf("Numeros primos no intervalo de %d a %d:\n", menor, maior);
    
    
    for ( numero = menor; numero <= maior; numero++) {
    	
        if (primo(numero)) {
        	
            printf("%d ", numero);
            
        }
        
    }
        
    return 0; 
 
}
