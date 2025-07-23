#include <stdio.h>

int main(){
	int cod_produto;
	char* produto;
	float preco = 0;
	
	printf("Insira o codigo do produto: \n");
	printf("[1] Camiseta. \n");
	printf("[2] Calca. \n");
	printf("[3] Sapato. \n");
	scanf("%d", &cod_produto);
	
	switch(cod_produto){
		case 1:
			produto = "Camiseta";
			preco = 49.90;
			break;
		case 2:
			produto = "Calca";
			preco = 99.00;
			break;
		case 3:
			produto = "Sapato";
			preco = 120.90;
			break;
		default:
			produto = "Nao encontrado.";
			preco = 00.00;
			break;
	}
	
	printf("Produto: %s. \n", produto);
	printf("Valor: %.2f. \n", preco);
}