#include <stdio.h>

int main (){
	int numero = 0;
	
	printf("Digite um numero: %d \n", numero);
	scanf("%d", &numero);
	
	if(numero > 0){
		printf("POSITIVO");
	} else if(numero < 0){
		printf("NEGATIVO");
	} else{
		printf("ZERO");
	} 
}