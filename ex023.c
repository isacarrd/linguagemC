#include <stdio.h>

int main(){
	int numero = 0;
	
	printf("Insira um numero: \n");
	scanf("%d", &numero);
	
	if(numero%2 == 1){
		printf("Numero primo!");
	} else{
		printf("Numero nao primo.");
	}
}