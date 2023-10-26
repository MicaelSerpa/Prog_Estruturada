#include <stdio.h>
#include <stdlib.h>

#include "Micael_Serpa.h"

#define pi 3.14 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
float digito;

printf("Digite o valor do Raio \n");
scanf("%f", &digito);

printf("O diametro eh %f \n", calculo_diametro(digito));

printf("A circunferencia eh %f \n", calculo_circunferencia(digito));

printf("A area eh %f \n", calculo_area(digito));
	
	
	return 0;
}
