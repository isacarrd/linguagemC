#include <stdio.h>

int main(){
	int qtd_morango = 0;
	float peso_morango = 0; 
	
	int qtd_maca = 0;
	float peso_maca = 0;
	
	float total_morango;
	float total_maca;
	
	float quilogramas;
	float total;
	float val_desconto;
	float pec_desc;
	
	printf("Informe a quantidade desejada de morangos: \n");
	scanf("%d", &qtd_morango);
	
	printf("Informe a quantidade desejada de macas: \n");
	scanf("%d", &qtd_maca);
	
	//morangos
	if(qtd_morango <= 5){
		peso_morango = 2.50;
		total_morango = peso_morango*qtd_morango;
	} else if(qtd_morango >= 5){
		peso_morango = 2.20;
		total_morango = peso_morango*qtd_morango;
	} else{
		printf("Tente novamente...\n");
	}
	
	//maças
	if(qtd_maca <= 5){
		peso_maca = 1.80;
		total_maca = peso_maca*qtd_maca;
	} else if(qtd_maca >= 5){
		peso_maca = 1.50;
		total_maca = peso_maca*qtd_maca;
	} else{
		printf("Tente novamente...\n");
	}
	
	//desconto
	quilogramas = qtd_morango + qtd_maca;
	total = total_morango + total_maca;
	
	if(quilogramas >= 8 || total >= 25){
		
		val_desconto = total*0.10;
		pec_desc = total - val_desconto;
		
		printf("Desconto: %.2f. \n", pec_desc);
		printf("Quilogramas: %.1fKG. \n", quilogramas);
	}
	
  
	
	printf("Preco dos morangos: %.2f. \n", total_morango);
	printf("Preco das macas: %.2f. \n", total_maca); 
}
