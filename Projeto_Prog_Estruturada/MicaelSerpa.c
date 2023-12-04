#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "MicaelSerpa.h"

#define ICMS 52.0
#define PIS 2.93
#define COFINS 13.50
#define Tarifa 0.80

void configs(void){
	
	setlocale(LC_ALL,"Portuguese");
   // system("color 1F");	
}

void registroEnergia(float * potencia, float * horas, char strings[100][100], int tam){
	
	int k;

	for( k = 0; k < tam; k++){
    	
   	printf("Digite a potencia do %s em Watts\n", strings[k] );
    scanf("%f", potencia+k); 
    printf("Digite o tempo de uso do %s em horas\n", strings[k] );
    scanf("%f", horas+k);    
    
	}
	
}

void registroDispositivos(char dispositivos[100][100], int num_Strings) {
	
    static int aux = 0;

    if (aux < num_Strings) {
    	        
	//	printf("%s Digite o nome do dispositivo %d: ", dispositivos[aux], aux + 1);
        printf("Digite o nome do dispositivo %d: ",aux + 1);
        scanf("%s", dispositivos[aux]);
        system("cls"); 
        aux++;
        registroDispositivos (dispositivos, num_Strings);
        
    } else {
    	
        aux = 0; 
        
    }
}

float registro(void){
	
int i,j,k,y;
char dispositivos[20][100]={"1", "2", "3", "4", "5"};
float potencia[20];
float horas[20];

int num_Strings;
float soma_diario;

    printf("Digite o numero de Dispositivos que deseja cadastrar: \n");
   
    scanf("%d", &num_Strings);
     
    system("cls");
    
	registroDispositivos(dispositivos, num_Strings);
	
    registroEnergia(potencia, horas, dispositivos, num_Strings );

	//printf("\n\nchegou aqui? %s %s\n\n", dispositivos[0], dispositivos[4]);
	
    for ( j = 0; j < num_Strings; j++) {
    	
        printf("%s possui %.2lf Watts e %.2lf horas de uso e seu consumo diario em kWh e %.2lf \n", dispositivos[j] , potencia[j], horas[j], calculo_consumo_diario(potencia[j],horas[j]));
       soma_diario = soma_diario + calculo_consumo_diario(potencia[j],horas[j]);
    }
    
    printf("\nRegistro Concluido com Sucesso. \n");
    
    return soma_diario;
	
}

float calculo_consumo_diario(float potencia, float tempo){
	
	float resultado;
	
	resultado = (potencia * tempo)/1000.0;
	
	return resultado;
	
}

float calculo_consumo_mensal(float consumo_diario){
	
	float consumo_mensal;
	
	consumo_mensal =  consumo_diario * 30.0;
	
	return consumo_mensal;
	
}

float calculo_custo_mensal(float consumo_mensal){
	
	float custo;
	
//custo = consumo_mensal * Tarifa + (ICMS + PIS + COFINS);
	custo = consumo_mensal * Tarifa;

	return custo;
	
}

