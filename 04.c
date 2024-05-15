#include <stdio.h>
#include <stdlib.h>

//Informa a diferença entre dois valores

int main (){
	
	int primeiro;
	int segundo;
	
	printf("Digite o primeiro valor:");
	scanf("%i", &primeiro);
	printf("Digite o segundo valor:");
	scanf("%i", &segundo);
	
	int diferenca = primeiro-segundo;
	
	printf("\nA diferenca entre eles e: %i", diferenca);
	
	return 0;
}
