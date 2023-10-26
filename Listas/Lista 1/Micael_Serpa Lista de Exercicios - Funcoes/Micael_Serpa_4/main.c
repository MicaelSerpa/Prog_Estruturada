#include <stdio.h>
#include <stdlib.h>

#include "Micael_Serpa.h"


int main(int argc, char *argv[]) {
	
char opcao;

    do {
	
        mostrarMenu();
        
        scanf(" %c", &opcao);

        switch (opcao) {
        	
            case 'a':
            	
            	limparTela();

                mostrarSaldo();
                
                break;
                
            case 'b':
            	
            	limparTela();

                printf("Informe o valor do saque: R$ ");
                
                float valorSaque;
                
                scanf("%f", &valorSaque);
                
                saldo = saque(valorSaque);
                
                
                break;
                
            case 'c':
            	
            	limparTela();

            	
                printf("Informe o valor do depósito: R$ ");
                
                float valorDeposito;
                
                scanf("%f", &valorDeposito);
                
                deposito(valorDeposito);
                
                break;
                
            case 'd':
            	
                limparTela();

                printf("Saindo do programa...\n");
                
                break;
                
            default:
            	
                printf("Opção invalida. Tente novamente.\n");

        }
        
    } while (opcao != 'd');
    
    return 0;	
	
}


