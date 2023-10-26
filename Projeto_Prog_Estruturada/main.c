#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "MicaelSerpa.h"

#define ICMS 52.0 //Imposto de circulação de mercadoria e prestação de serviços
#define PIS 2.93 //Imposto para seguro-desemprego
#define COFINS 13.50 //Contribuição para o Financiamento da Seguridade Social
#define Tarifa 0.60 //Custo por cada kWh consumido


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
//	configs();//Corrige a acentuação

	int escolha;	
	float consumo_diario;
	float consumo_mensal;
	float custo_mensal;
	
	do{
	
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
		
		consumo_diario = registro();
	    consumo_mensal = calculo_consumo_mensal(consumo_diario);
		custo_mensal = calculo_custo_mensal(consumo_mensal);
		
		printf("\n O consumo mensal em kWh e aproximadamente %.2lf \n", consumo_mensal);
		printf("\n\n O custo mensal em R$ considerando impostos e aprox. %.2lf\n", custo_mensal);	
			
	break;
			
	case 2:	
	
	
	break;
	
	case 3:


	break;
		
	}
	
	
}while(escolha != 4);
	
	return 0;
}
