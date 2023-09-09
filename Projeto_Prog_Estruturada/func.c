#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "func.h"

void configs(void){
	
	setlocale(LC_ALL,"Portuguese");
    system("color 1F");
	
}

void inicializacao(void){
	
	int flag_registro = 0;
	int escolha;
	
	
	printf("---------------------------------------\n");
	printf("-- Eficiência Energética Residencial --\n");
	printf("---------------------------------------\n");

	printf("Escolha uma opção:\n");
	printf("1 - Registrar dispositivos\n");
	printf("2 - Calcular consumo mensal e valor gasto\n");
	printf("3 - Listar dispositivos cadastrados\n");
	printf("4 - Limpar Registros\n");
	scanf("%i", &escolha);
	
	switch(escolha){
		
	case 1:
		registro();
		flag_registro = 1;		
	break;
			
	case 2:	
	
		if(flag_registro != 1){
			
			printf("Registro não realizado. Iniciando registro.\n\n");
			registro(); //Se o usuário não fez o registro
						
		}						
	break;
	
		
	case 3:
				
	printf("Não há nada na opção 3");
	if(flag_registro != 1){
			
			printf("Registro não realizado. Iniciando registro.\n\n");
			//aqui vai a função do vetor dispositivos[i] clonado		
		}			
	break;
	
	
	case 4:
	
	inicializacao();
	printf("Não há nada na opção 4");	
					
	break;
	
		
	}
	
	
}

int registro(void){
	
	int i;
//	int j;
//	int k;
	
	
	
	
	int num_Strings;

float soma_diario;

    printf("Digite o numero de Dispositivos que deseja cadastrar: \n");
   
   if (scanf("%d", &num_Strings) != 1) {
       printf("Entrada inválida.\n");
       
       return 1;
    }
    
    system("cls");
    
   int c;
   
   c = getchar();
   
   while ((c) != '\n' && c != EOF);

    
    char dispositivos[num_Strings][100];
    float potencia[num_Strings];
    float horas[num_Strings];

    for ( i = 0; i < num_Strings; i++) {
    	
    	printf("Digite o nome do dispositivo %d: ", i + 1);
        
        fgets(dispositivos[i], sizeof(dispositivos[i]), stdin);

        dispositivos[i][strcspn(dispositivos[i], "\n")] = '\0';
        system("cls"); 
        
    }
    
    
   
    
    





    return 0;
	
}






float calculo_consumo_diario(float potencia, float tempo){
	
	float resultado;
	
	resultado = (potencia * tempo)/1000.0;
	
	return resultado;
}








