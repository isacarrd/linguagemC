#include <stdio.h>
#include <stdlib.h>

int main(){
	int numeros;
	int qtd_numeros;
	int contador;
	int quantosPar = 0;
	int quantosImpar = 0;
	int soma = 0;
	float media;
	
	printf("Quantos numeros serao inseridos? \n");
	scanf("%d", &qtd_numeros);
	
	int *list_numeros = (int *)malloc(qtd_numeros * sizeof(int));
	
	for(contador=0; contador < qtd_numeros; contador++){
		printf("Insira o %d numero: \n", contador);
		scanf("%d", &list_numeros[contador]);
		soma += list_numeros[contador];
		
		if(list_numeros[contador] == 0){
			break;
		} else if(list_numeros[contador] % 2 == 0){
			quantosPar++;
		} else if(list_numeros[contador] % 2 == 1){
			quantosImpar++;
		}
		
	}
	
	if(contador > 0){
		media = (float)soma/contador;
	} else{
		media = 0.0;
	}
	
	printf("Existem %d numeros pares \n", quantosPar);
	printf("Existem %d numeros impares \n", quantosImpar);
	printf("Soma: %d \n", soma);
	printf("Media: %.1f", media);
}