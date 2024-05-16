#include <stdio.h>
#include <stdlib.h>

//Programa vai converter Fahrenheit em Celsius.

int main (){
	
	float fahrenheit;
	
	printf("Escreva a temperatura em Fahrenheit:");
	scanf("%f", &fahrenheit);
	
	float celsius  = (fahrenheit-32)/1.8;
	
	printf("\nEssa temperatura em Fahrenheit convertida em Celsius e: %f", celsius);
	
	return 0;
}
	
