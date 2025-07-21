#include <stdio.h>

int main(){
	int num; 
	float divisaoteste;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	/*
	divisaoteste = num / 2;
	printf("%.2f \n", divisaoteste); */
	
	
	if(num % 2 == 0){
		printf("Numero Par");
	} else{
		printf("Numero impar");
	}
	
}