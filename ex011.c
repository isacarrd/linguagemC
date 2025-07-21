#include <stdio.h>

int main(){
	char descricao[300];
	int quant_ad;
	float prec_uni;
	
	float desc_final;
	float desconto;
	float total;
	float tot_pagar;
	
	printf("Descricao do produto: \n");
	scanf("%s", &descricao);
	
	printf("Quantidade adquirida: \n");
	scanf("%d", &quant_ad);
	
	printf("Preco Unitario: \n");
	scanf("%f", &prec_uni);
	
	total = quant_ad * prec_uni;
	
	if(quant_ad <= 5){
		desconto = 0.02;
		desc_final = total * desconto;
	} else if(quant_ad > 5 && quant_ad <= 10){
		desconto = 0.03;
		desc_final = total * desconto;
	} else if(quant_ad > 10){
		desconto = 0.05;
		desc_final = total * desconto;
	} else{
		printf("Sem desconto aplicavel para este valor. \n");
	}
	
	tot_pagar = total - desc_final; 

	

	printf("Total: R$%.2f. \n", total);
	printf("Desconto aplicavel: %.2f. \n", desconto);
	printf("Desconto em real: R$%.2f. \n", desc_final);
	printf("Valor total da compra: R$%.2f. \n", tot_pagar); 
	
	
}