#include <stdio.h>

int main(){
	int senha = 1234;
	
	printf("Insira uma senha [apenas numeros]: ");
	scanf("%d", &senha);
	
	if(senha == 1234){
		printf("Acesso Permitido!");
	} else{
		printf("Acesso negado");
	}
}