#include <stdio.h>
#include <stdlib.h>

#include "Micael_Serpa.h"

 float saldo;
 
void mostrarSaldo() {
	
    printf("Saldo atual: R$ %.2f\n", saldo);
    
}

float saque(float valor) {
	
    if (valor > saldo) {
    	
        printf("Saldo insuficiente. Saque nao realizado.\n");
        
    }
	 else {
	 	
        saldo -= valor;
        printf("Saque de R$ %.2f realizado com sucesso.\n", valor);
        
    }
    
    return saldo;
    
}

void deposito(float valor) {
	
    saldo += valor;
    
    printf("Deposito de R$ %.2f realizado com sucesso.\n", valor);
    
}

void mostrarMenu() {
	
    printf("Escolha uma opcao:\n");
    printf("a - Consultar saldo\n");
    printf("b - Realizar saque\n");
    printf("c - Realizar deposito\n");
    printf("d - Sair do programa\n");
    
}

void limparTela() {
	
    system("cls");
    
}

