#include <stdio.h>
#include <stdlib.h>

#include "MicaelSerpa.h"


//PARTE 1 – ASCII e STRING


void strUppercase(char *str) {
	
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32; 
        }
        str++;
    }
}

int countVowels(char *str) {
	
    int cont = 0;
    
    while (*str) {
    	
        switch (*str) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cont++;
                break;
        }
        str++;
        
    }
    
    return cont;
}

void toggleString(char *str) {
	
    while (*str) {
    	
        if (*str >= 'a' && *str <= 'z') {
        	
            *str = *str - 32;  
            
        } else if (*str >= 'A' && *str <= 'Z') {
        	
            *str = *str + 32;  
            
        }
        
        str++;
    }
}


//PARTE 2 – CHAR e STRING


int findChar(char *str, char caracter) {
	
    int posicao = -1;
    int index = 0;
    
    
    while (*str) {
    	
        if (*str == caracter) {
        	
            posicao = index + 1; 
            
            break;
        }
        
        str++;
        
        index++;
        
    }
    
    return posicao;
    
}


int countChar(char *str, char caracter) {
	
    int cont = 0;
    
    while (*str) {
    	
        if (*str == caracter) {
        	
            cont++;
        }
        
        str++;
    }
    
    return cont;
}


char findHighestFrequentChar(char *str) {
	
    int cont[256] = {0}; 
    char *maxChar = str;
    int maxCont = 0;
    
    while (*str) {
    	
        cont[*str]++;
        
        if (cont[*str] > maxCont) {
        	
            maxChar = str;
            
            maxCont = cont[*str];
        }
        
        str++;
    }
    
    return *maxChar;
}


void removeChar(char *str, char caracter) {
	
    char *src, *dst;
    src = dst = str;
    
    while (*src) {
    	
        if (*src != caracter) {
        	
            *dst = *src;
            
            dst++;
        }
        
        src++;
        
    }
    
    *dst = '\0'; 
    
}



void replaceChar(char *str, char caracter, char troca) {
	
    while (*str) {
    	
        if (*str == caracter) {
        	
            *str = troca;
            
        }
        
        str++;
    }
}



