#include <stdio.h>
#include <stdlib.h>

#define pi 3.14 

float calculo_diametro(int r){

float resultado;

resultado = 2 * r;

	return resultado;
}

float calculo_circunferencia(int r){

float resultado;

resultado = 2 * pi * r;

return resultado;
}

float calculo_area(int r){

float resultado;

resultado =  pi * pow(r, 2) ;

	return resultado;
}
