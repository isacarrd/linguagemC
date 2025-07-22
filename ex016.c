#include <stdio.h>

int main(){	
	int dia;
	int desc_print; //apenas pra estilização
	float desconto;
	int compra;
	float total;
	float comp_desc;
	
	printf("Dia da Semana: \n");
	printf("[1] SEGUNDA \n");
	printf("[2] TERCA \n");
	printf("[3] QUARTA \n");
	printf("[4] QUINTA \n");
	printf("[5] SEXTA \n");
	printf("[6] SABADO \n");
	printf("[7] DOMINGO \n");
	scanf("%d", &dia);
	printf("Valor da compra: \n");
	scanf("%d", &compra);
	
	if((dia == 1 || dia == 2 || dia == 3 || dia == 4 || dia == 5) && compra > 100){
		desc_print = 10;
		desconto = 0.10;
		comp_desc = compra*desconto;
		total = compra-comp_desc;
	} else if((dia == 6 || dia ==7) && compra > 100){
		desc_print = 15;
		desconto = 0.15;
		comp_desc = compra*desconto;
		total = compra-comp_desc;
	} else{
		desconto = 0;
		total = compra;
	}
	
	printf("Desconto aplicado: %d Porcento. \n", desc_print);
	printf("Total da compra: %.2f. \n", total);
}