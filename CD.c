#include <stdio.h>

int main(){
	char nome_cd[20];
	char marcacao[20];
	
	char verde[20] = "verde";
	char azul[20] = "azul";
	char amarelo[20] = "amarelo";
	char vermelho[20] = "vermelho";
	
	int preco;
	
	printf("Qual o nome do CD? \n");
	scanf("%s", &nome_cd);
	
	printf("Qual a marcacao do CD? \n");
	printf("[] VERDE \n");
	printf("[] AZUL \n");
	printf("[] AMARELO \n");
	printf("[] VERMELHO \n");
	scanf("%s", &marcacao);
	
	if(strcmp(marcacao,verde)==0){
		preco = 10;
	} else if(strcmp(marcacao,azul)==0){
		preco = 20;
	} else if(strcmp(marcacao,amarelo)==0){
		preco = 30;
	} else if(strcmp(marcacao,vermelho)==0){
		preco = 40;
	} else{
		printf("Cor nao listada! \n");
	}
	
	printf("Nome do CD: %s. \n", nome_cd);
	printf("Marcacao: %s. \n", marcacao);
	printf("Preco: %d. \n", preco);
}