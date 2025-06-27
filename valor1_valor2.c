#include <stdio.h>

int main(){
	int valor1;
	int valor2;
	
	printf("Insira o valor 1: \n");
	scanf("%d", &valor1);
	printf("Insira o valor 2: \n");
	scanf("%d", &valor2);
	
	if(valor1>valor2){
		printf("Valor 1 maior!");
	} else{
		printf("Valor 2 maior!");
	}
	
}