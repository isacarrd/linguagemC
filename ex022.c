#include <stdio.h>

int main(){
	int numero = 0;
	
	printf("Insira um numero inteiro: \n");
	scanf("%d", &numero);
	
	
	if(numero > 0){
		while(numero >= 0){
			printf("%d ", numero);
			numero--;
		}
	}else if (numero < 0 ){
		while(numero <= 0){
			printf("%d ", numero);
			numero++;
		}
	}
	
}