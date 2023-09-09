#include <stdio.h>
#include <stdlib.h>

#define pi 3.14 

float calculo_diametro(int r);
float calculo_circunferencia(int r);
float calculo_area(int r);

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

int main (){

float digito;

printf("Digite o valor do Raio \n");
scanf("%f", &digito);

printf("%f \n", calculo_diametro(digito));

printf("%f \n", calculo_circunferencia(digito));

printf("%f \n", calculo_area(digito));
	
	return 0;
}
