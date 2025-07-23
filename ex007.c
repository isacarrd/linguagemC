#include <stdio.h>

int main(){
	int num; 
	float divisaoteste;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("Numero Par");
	} else{
		printf("Numero impar");
	}
	
}