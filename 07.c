#include <stdio.h>
#include <stdlib.h>

//Restaurante sel-service cobra R$45,00 por cada quilo de refeição. O programa vai ler o peso do prato montado pelo cliente (em quilos) e imprimir o valor a pagar.

int main (){
	
	float peso;
	
	printf("Digite o peso do seu prato em Kg:");
	scanf("%f", &peso);
	
	float pagar = peso*45.00;
	
	printf("\nO valor a pagar pelo prato e: %f", pagar);
	
	return 0;
}
	
