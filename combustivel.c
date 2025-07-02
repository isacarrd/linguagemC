#include <stdio.h>
#include <string.h>

int main(){
	
	int litros;
	float desconto;
	float por_litro;
	float litro_desc;
	float total;
	
	char combustivel[5];
	
	char* A = "A";
	float litro_alcool = 3.79;
	
	char* G = "G";
	float litro_gasol = 6.59;
	
	printf("Qual gasolina desejada? \n");
	printf("[A] Alcool\n");
	printf("[G] Gasolina\n");
	//scanf("%s", &combustivel);
	//fgets(combustivel, sizeof(combustivel), stdin);
	scanf("%s", &combustivel);
	printf("Quantos litros de combustivel voce deseja? \n");
	scanf("%d", &litros);
 
	//alcool
	if(strcmp(combustivel,A)==0){
		if(litros < 25){
			desconto = 0.02;
			por_litro = litros * litro_alcool;
			litro_desc = por_litro * desconto;
			total = por_litro - litro_desc;
		} else if(litros > 25){
			desconto = 0.04;
			por_litro = litros*litro_alcool;
			litro_desc = por_litro*desconto;
			total = por_litro - litro_desc;
			
		} else{
			printf("Desconto não encontrado! \n");
		}
	}
	
	//gasolina
	if(strcmp(combustivel,G)==0){
		if(litros < 25){
			desconto = 0.03;
			por_litro = litros * litro_gasol;
			litro_desc = por_litro * desconto;
			total = por_litro - litro_desc;
		} else if(litros > 25){
			desconto = 0.05;
			por_litro = litros * litro_gasol;
			litro_desc = por_litro * desconto;
			total = por_litro - litro_desc;
		} else{
			printf("Desconto não encontrado! \n");
		}
	}
	
	//printf("Gasolina escolhida: %c.\n", combustivel);
	//printf("Litros: %d. \n", litros);
	printf("Total a ser pago: %.2f. \n", total);
	
	return 0;
}