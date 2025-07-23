#include <stdio.h>

int main(){
	int idade = 0;
	char nome[15];
	
	printf("Insira seu nome: \n");
	scanf("%s", &nome);
	printf("Insira sua idade: \n");
	scanf("%d", &idade);
	
	printf("                    \n");
	printf("Nome: %s. \n", nome);
	printf("Idade: %d anos. \n", idade);
	
	if(idade >= 18){
		printf("Acesso permitido.");
	} else{
		printf("Acesso negado.");
	}
	
}