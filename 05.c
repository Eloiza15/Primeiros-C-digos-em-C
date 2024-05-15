#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float dividendo, divisor;
	
	printf("Digite o dividendo:");
	scanf("%i", &dividendo);
	printf("Digite o divisor:");
	scanf("%i", &divisor);
	
	float resultado = dividendo/divisor;
	
	printf("\nO resultado e: %f", resultado);
	
	return 0;
}
