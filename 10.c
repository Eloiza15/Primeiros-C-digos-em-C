#include <stdio.h>
#include <stdlib.h>

//Recebe valores do tipo inteiro em duas variáveis. A funcionalidade troca, precisa inverter os valores dessas variáveis e exibir o valor antigo e o novo valor de cada uma das variáveis.

int main (){
	
	int valorUm;
	int valorDois;
	int valorNovo;
		
	printf("Escreva o valor 1:");
	scanf("%i", &valorUm);
	printf("Escreva o valor 2:");
	scanf("%i", &valorDois);
	
	printf("\nValor da primeira variavel: %i", valorUm);
	printf("\nValor da segunda variavel: %i", valorDois);
	
	valorNovo = valorUm;
	valorUm = valorDois;
	valorDois = valorNovo;
	
	printf("\nNovo valor da primeira variavel: %i", valorUm);
	printf("\nNovo valor da segunda variavel: %i", valorDois);
	
	
	return 0;
}
	
