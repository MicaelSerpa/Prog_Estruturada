#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Micael_Serpa.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double a;
	double i;
	
	printf("Informe o valor da base:\n");
	scanf("%lf",&a);	
	printf("O quadrado de %lf eh %lf \n", a, quadrado(a));
	printf("O cubo de %lf eh %lf", a, cubo(a));
	
	return 0;
}





