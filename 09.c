#include <stdio.h>
#include <stdlib.h>

//Recebe o valor do raio de uma circunferência, e em seguida mostra o diâmetro, comprimento e área da circunferência.

int main (){
	
	float raio;
	
	printf("Escreva o valor do raio da circunferencia:");
	scanf("%f", &raio);
	
	float diametro  = raio*2;
	float comprimento  = 2*3.14*raio;
	float area  = 3.14*raio*raio;
	
	printf("\nO diametro dessa circunferencia e: %f", diametro);
		printf("\nO comprimento dessa circunferencia e: %f", comprimento);
			printf("\nA area dessa circunferencia e: %f", area);
	
	return 0;
}
	
