#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "MicaelSerpa.h"


//PARTE 1 � RECURS�O e MATEM�TICA

// Fun��o para imprimir os n�meros naturais de 1 a N
void printNaturals(int N) {
	
    if (N > 0) {
    	
        printf("%d ", N);
        
        printNaturals(N - 1);
        
    }
}

// Fun��o para calcular a soma dos n�meros naturais de 1 a N
int sumNaturals(int N) {
	
    if (N == 0) {
    	
        return 0;
        
    } else {
    	
        return N + sumNaturals(N - 1);
    }
}

// Fun��o para contar os d�gitos do n�mero N
int nOfDigits(int N) {
	
    if (N < 10) {
    	
        return 1;
        
    } else {
    	
        return 1 + nOfDigits(N / 10);
        
    }
}

// Fun��o para calcular a soma dos d�gitos do n�mero N
int DigitSum(int N) {
	
    if (N < 10) {
    	
        return N;
        
    } else {
    	
        return N % 10 + DigitSum(N / 10);
        
    }
}

// Fun��o para converter um n�mero decimal para bin�rio
long convertBinary(int decN) {
	
    if (decN == 0) {
    	
        return 0;
        
    } else {
    	
        return (decN % 2) + 10 * convertBinary(decN / 2);
    }
}

// Fun��o para imprimir todos os n�meros pares ou �mpares de 1 a N
void EvenAndOdd(int valorPadrao, int N) {
	
    if (N > 0) {
    	
        if (N % 2 == valorPadrao % 2) {
        	
            printf("%d ", N);
        }
        
        EvenAndOdd(valorPadrao, N - 1);
    }
}

// Fun��o para inverter os d�gitos do n�mero N
int reverse(int N) {
	
    if (N < 10) {
    	
        return N;
        
    } else {
    	
        int digit = N % 10;
        
        int numberOfDigits = nOfDigits(N);
        
        return digit * pow(10, numberOfDigits - 1) + reverse(N / 10);
    }
}


int findMCD(int a, int b) {
	
    if (b == 0) {
    	
        return a;
        
    } else {
    	
        return findMCD(b, a % b);
    }
}
