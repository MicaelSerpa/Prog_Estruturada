#include <stdio.h>
#include <stdlib.h>

#include "MicaelSerpa.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	 
	 //PARTE 1 – ASCII e STRING
	 
	char entrada[] = "Programacao Estruturada";
	 
    printf("String de entrada: %s\n", entrada);
    
    strUppercase(entrada);
    
    printf("String de saida: %s\n\n", entrada);
	
	char entrada1[] = "Programacao Estruturada";

    int vogais = countVowels(entrada1);

    printf("A string %s tem %d vogais.\n\n",entrada1, vogais);
	
	
	char entrada2[] = "Programacao Estruturada";
	 
    printf("String de entrada: %s\n", entrada2);
    
    toggleString(entrada2);
    
    printf("String de saida: %s\n\n", entrada2);
	
	
	//PARTE 2 – CHAR e STRING
	
	
    char entrada3[] = "Programacao Estruturada";
    char caracter1 = 'r';
    
    int posicao = findChar(entrada3, caracter1);
    
    printf("Caracter '%c' encontrado na posicao %d da str \"%s\"\n", caracter1, posicao, entrada3);
	
	

	char entrada4[] = "Programacao Estruturada";
    char caracter2 = 'r';
    
    int occurrences = countChar(entrada4, caracter2);
    
    printf("Caracter '%c' encontrado %d vezes na string \"%s\"\n\n", caracter2, occurrences, entrada4);




	char entrada5[] = "Programacao Estruturada";
    
    char mostFrequentChar = findHighestFrequentChar(entrada5);
    
    printf("Caracter '%c' eh o caracter mais comum em \"%s\"\n\n", mostFrequentChar, entrada5);


	char entrada6[] = "Programacao Estruturada";
    char caracter3 = 'r';
    
    printf("Removendo '%c' de \"%s\"\n\n", caracter3, entrada6);
    
    removeChar(entrada6, caracter3);
    
    printf("Resultado: \"%s\"\n\n", entrada6);
	
	
	char entrada7[] = "Programacao Estruturada";
    char caracter4 = 'r';
    char substituir = 'l';
    
    printf("Substituindo '%c' por '%c' em \"%s\"\n\n", caracter4, substituir, entrada7);
    
    replaceChar(entrada7, caracter4, substituir);
    
    printf("Resultado: \"%s\"\n\n", entrada7);
	
	return 0;
}
