#include <stdio.h>
#include <stdlib.h>

//Passa peso em quilos pra gramas

int main (){
	
	float peso;
	
	printf("Digite seu peso em Kg:");
	scanf("%f", &peso);
	
	float gramas = peso*1000;
	
	printf("\nSeu peso em gramas e: %f", gramas);
	
	return 0;
}
	
