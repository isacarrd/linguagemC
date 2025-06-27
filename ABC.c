#include <stdio.h>

int main(){
	int A, B, C, soma;
	
	printf("Valor A:\n");
	scanf("%d", &A);
	
	printf("Valor B: \n");
	scanf("%d", &B);
	
	printf("Valor C: \n");
	scanf("%d", &C);
	
	soma = A + B;
	printf("A soma de A + B e: %d. \n", soma);
	
	if (soma > C){
		printf("A + B e Maior\n");
	} else{
		printf("A + B e Menor\n");
	}
}