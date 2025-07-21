#include <stdio.h>

int main(){
	int numero1;
	int numero2;
	
	char operador[5];
	
	char* adc = "+";
	char* sub = "-";
	char* multi = "*";
	char* divi = "/";
	
	int resultado;
	
	printf("Informe um numero: \n");
	scanf("%d", &numero1);
	printf("Informe o segundo numero: \n");
	scanf("%d", &numero2);
	printf("Infome a operacao que quer realizar: \n");
	scanf("%s", &operador);
	
	if(strcmp(operador,adc)==0){
		resultado = numero1 + numero2;
	} else if(strcmp(operador,sub)==0){
		resultado = numero1 - numero2;
	} else if(strcmp(operador,multi)==0){
		resultado = numero1 * numero2;
	} else if(strcmp(operador,divi)==0){
		resultado = numero1 / numero2;
	} else{
		printf("Operacao nao pode ser efetuada. \n");
	}
	
	//printf("Resultado: %d", resultado);
	printf("Operacao: %d %s %d = %d", numero1, operador, numero2, resultado);
}