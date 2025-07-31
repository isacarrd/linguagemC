#include <stdio.h>

int main(){
	int numero1;
	int numero2;
	
	printf("Informe o primeiro numero: \n");
	scanf("%d", &numero1);
	printf("Informe o segundo numero: \n");
	scanf("%d", &numero2);
	
	if(numero1 > numero2){
		printf("%d maior que %d", numero1, numero2);
	} else if(numero1 < numero2){
		printf("%d maior que %d", numero2, numero1);
	} else if(numero1 == numero2){
		printf("numeros iguais");
	}
}