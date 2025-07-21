#include <stdio.h>

int main(){
	
	int idade;
	
	printf("Insira sua idade: \n");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("Voce esta apto para dirigir!");
	} else{
		printf("Voce nao pode dirigir");
	}
}