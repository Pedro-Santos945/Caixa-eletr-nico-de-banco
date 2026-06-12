#include <stdio.h>
#include <stdlib.h>


float saldo = 1000.00;
void main() {
	printf("Seja bem vindo ao seu caixa eletronico!");
	printf("\nO que voce deseja fazer?");
	
	//FEITO POR GUSTAVO ANDRÉ E PEDRO HENRIQUE SANTOS
	
	int opcao;
	
	while(opcao != 7) {
	
	printf("\n1. Verificar saldo\n");
	printf("2. Depositar valor\n");
	printf("3. Sacar valor\n");
	printf("4. Pedir emprestimo\n");
	printf("5. Pagar emprestimo\n");
	printf("6. Consultar emprestimo\n");
	printf("7. Sair\n");
	
	printf("\n\nDigite um numero: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:{
			printf("\n\nO seu saldo e igual a: %.2f\n", saldo);
			break;
		}
		
		case 2:{
			float deposito;
			printf("\n\nDigite o quanto voce quer depositar: ");
			scanf("%f", &deposito);
			saldo += deposito;
			printf("\nDeposito realizado!");
			break;
		}
		
		case 3:{
			
			break;
		}
		
		case 4:{
			
			break;
		}
		
		case 5:{
			
			break;
		}
			
	 }
	}
}
