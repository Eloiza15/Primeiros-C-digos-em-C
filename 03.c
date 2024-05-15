#include <stdio.h>
#include <stdlib.h>

//Calcula e exibe área de um triângulo

int main (){
	int base;
	int altura;
	
	printf("Digite a base do triangulo:");
	scanf("%i", &base);
	printf("Digite a altura do triangulo:");
	scanf("%i", &altura);
	
	int area = base*altura;
	
	printf("\nA area e: %i", area);
	
	return 0;
}
