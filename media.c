#include <stdio.h>

int main(){
	int nota1, nota2, soma;
	int media;
	
	printf("Insira a nota da Prova de Matematica: \n");
	scanf("%d", &nota1);
	
	printf("Insira a nota da Prova de Ciencias: \n");
	scanf("%d", &nota2);
	
	soma = nota1 + nota2;
	media = soma / 2;
	printf("Sua media: %d\n", media);
	
	if(media >= 6){
		printf("APROVADO!!!!!! NAO FEZ MAIS QUE SUA OBRIGACAO");
	} else if(media >= 4 && media < 6 ){
		printf("DA PRA RECUPERAR BRODI/BRODA");
	} else{
		printf("REPROVADO!!!!!!!!!");
	}
}