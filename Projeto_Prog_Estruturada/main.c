#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "MicaelSerpa.h"

#define ICMS 52.0 //Imposto de circula��o de mercadoria e presta��o de servi�os
#define PIS 2.93 //Imposto para seguro-desemprego
#define COFINS 13.50 //Contribui��o para o Financiamento da Seguridade Social
#define Tarifa 0.80 //Custo por cada kWh consumido


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
//	configs();//Corrige a acentua��o

	int escolha;	

	do{
	
	printf("\n");
	printf("---------------------------------------\n");
	printf("-- Eficiencia Energetica Residencial --\n");
	printf("---------------------------------------\n");

	printf("Escolha uma opcao:\n");
	printf("1 - Calcular consumo mensal e valor gasto\n");
	printf("2 - Listar dispositivos cadastrados\n");
	printf("3 - Limpar Registros\n");
	scanf("%i", &escolha);
	
	switch(escolha){
		
	case 1:
		
	 registro();
	break;
			
	case 2:	
	
		system("cls");
		printf("\n %i \n",list_dispositivos());
	break;
	
	case 3:
		
		printf("\n %i \n",limpar_registros());
	break;
		
	}
	
}while(escolha != 4);
	
	return 0;
}
