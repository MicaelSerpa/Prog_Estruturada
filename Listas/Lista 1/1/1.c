#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int funcao(int base, int expoente);

int funcao(int base, int expoente){
	
	int resultado = pow(base, expoente);
	
	return resultado;
}

int main(){

	int a;
	int i;
	
	printf("Informe o valor da base\n");
	scanf("%i",&a);


for ( i = 2; i < 4; i++){
	
	printf("%i \n", funcao(a, i));

}

return 0;	
}
