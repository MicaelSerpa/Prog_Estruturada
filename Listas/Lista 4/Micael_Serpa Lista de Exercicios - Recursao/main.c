#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#include "MicaelSerpa.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	//PARTE 1 – RECURSÃO e MATEMÁTICA
	
    int N = 10;
    printf("Numeros naturais sao: ");
    printNaturals(N);
    printf("\n");

    printf("A soma dos numeros de 1 a %d eh: %d\n", N, sumNaturals(N));

    int numberDigits = nOfDigits(50);
    printf("O numero de digitos de 50 eh: %d\n", numberDigits);

    int digitSum = DigitSum(25);
    printf("A soma dos digitos de 25 eh: %d\n", digitSum);

    long binaryResult = convertBinary(66);
    printf("O binario correspondente ao decimal 66 eh: %ld\n", binaryResult);

    printf("Todos os pares de 1 a %d sao: ", N);
    EvenAndOdd(2, N);
    printf("\n");

    printf("Todos os impares de 1 a %d sao: ", N);
    
    EvenAndOdd(1, N);
    
    printf("\n");

    int reversedNumber = reverse(123);
    
    printf("O inverso de 123 eh: %d\n", reversedNumber);

    int a = 10, b = 50;
    
    int mcdResult = findMCD(a, b);
    
    printf("O MCD entre %d e %d eh: %d\n", a, b, mcdResult);
	
	return 0;
}
