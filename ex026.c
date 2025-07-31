#include <stdio.h>
#include <stdlib.h>

int main(){
	int qtd_notas;
	float notas = 0.0;
	float media = 0.0;
	int contador;
	
	printf("Insira a quantidade de notas que serao inseridas: \n");
	scanf("%d", &qtd_notas);
	
	float *list_notas = (float *)malloc(qtd_notas * sizeof(float));
	
	for(contador=0; contador<qtd_notas; contador++){
		printf("Insira a %d nota: \n", contador);
		scanf("%f", &list_notas[contador]);
		notas += list_notas[contador];
	}
	
	media = notas/qtd_notas;
	printf("Media: %.2f. \n", media);
	
}