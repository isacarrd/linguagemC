#include <stdio.h>

int main(){
	float nota;
	
	printf("Insira a nota do aluno [max 10.0]: \n");
	scanf("%f", &nota);
	
	if(nota >= 9){
		printf("Excelente!");
	} else if(nota >= 7 && nota < 8.9){
		printf("Bom!");
	} else if(nota >= 5 && nota < 6.9){
		printf("Razoavel...");
	} else if(nota < 5){
		printf("Insuficiente");
	}
}