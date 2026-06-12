#include <stdio.h>
#include <stdlib.h>
//FEITO POR GUSTAVO ANDRÉ E PEDRO HENRIQUE SANTOS
float saldo = 1000.00;
float emprestimo;
void main() {
	printf("Seja bem vindo ao seu caixa eletronico!");
	printf("\nO que voce deseja fazer?");
	
	
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
			printf("\nDeposito realizado!\n\n");
			break;
		}
		
		case 3:{
			float saque;
			printf("\n\nDigite o quanto voce quer sacar: ");
			scanf("%f", &saque);
			saldo -= saque;
			printf("\nSaque realizado!\n\n");
			break;
		}
		
		case 4:{
			printf("\n\nDigite quanto de emprestimo voce quer pedir: ");
			scanf("%f", &emprestimo);
			saldo += emprestimo;
			printf("\nEmprestimo realizado!\n\n");
			break;
		}
		
		case 5:{
			saldo -= emprestimo;
			printf("\n\nEmprestimo pago. Aperte '1' para consultar o seu saldo novamente.\n");
			break;
		}
		
		case 6:{
			printf("\n\nO valor total que voce fez em emprestimos e igual a: %.2f\n", emprestimo);
			break;
		}
		
		default:{
			printf("\n\nOpcao invalida. Tente novamente.\n");
			break;
		}
			
	 }
	}
}
