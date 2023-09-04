#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "func.h"

void configs(void){
	
	setlocale(LC_ALL,"Portuguese");
    system("color 1F");
	
}


float calculo_consumo_diario(float potencia, float tempo){
	
	float resultado;
	
	resultado = (potencia * tempo)/ 1000.0;
	
	return resultado;
}


int dados(void){
	
	int i;
	int j;
	int k;
	int num_Strings;


    // Solicitar ao usuário o número de strings a serem lidas
    printf("Digite o numero de Dispositivos que deseja cadastrar: \n");
   
   if (scanf("%d", &num_Strings) != 1) {
       printf("Entrada inválida.\n");
       
       return 1;
    }
    
    system("cls");
    
    // Consumir o caractere de nova linha pendente
   int c;
   
   c = getchar();
   
   while ((c) != '\n' && c != EOF);

    // Declara um vetor para armazenar as strings
    
    char dispositivos[num_Strings][100];
    float potencia[num_Strings];
    float horas[num_Strings];

    // Ler as strings
    for ( i = 0; i < num_Strings; i++) {
    	
    	printf("Digite o nome do dispositivo %d: ", i + 1);
        
        fgets(dispositivos[i], sizeof(dispositivos[i]), stdin);
        // Remover o caractere de nova linha do final da entrada
        dispositivos[i][strcspn(dispositivos[i], "\n")] = '\0';
    }
    
    for(k = 0; k < num_Strings; k++){
    	
    	printf("Digite a potência do %s em Watts\n", dispositivos[k] );
        scanf("%f", &potencia[k]); 
        printf("Digite o tempo de uso do %s em horas\n", dispositivos[k] );
        scanf("%f", &horas[k]);    
        system("cls"); 
	}

    system("cls");

    for ( j = 0; j < num_Strings; j++) {
    	
    	
        printf("%s possui %f Watts e %f horas de uso e seu consumo diário em kWh é %f \n", dispositivos[j] , potencia[j], horas[j], calculo_consumo_diario(potencia[j],horas[j]));
    }

    return 0;
	
}
