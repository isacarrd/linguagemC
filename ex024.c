#include <stdio.h>

int main(){
	float val1 = 0;
	float val2 = 0;
	
	char operador;
	float operacao = 0;
	
	char* adc = "+";
	char* sub = "-";
	char* multi = "*";
	char* divi = "/";
	
	printf("Valor 1: \n");
	scanf("%f", &val1);
	printf("Valor 2: \n");
	scanf("%f", &val2);
	
	printf("Qual operador? \n");
	scanf("%s", &operador);
	
	switch(operador){
		case '+':
			operacao = val1+val2;
			printf("A soma de %.0f e %.0f = %.0f \n", val1, val2, operacao);
			break;
		case '-':
			operacao = val1-val2;
			printf("A subtracao de %.0f e %.0f = %.0f \n", val1, val2, operacao);
			break;
		case '*':
			operacao = val1*val2;
			printf("A multiplicacao de %.0f e %.0f = %.0f \n", val1, val2, operacao);
			break;
		case '/':
			operacao = val1/val2;
			printf("A divisao de %.0f e %.0f = %.2f \n", val1, val2, operacao);
			break;
		default:
			printf("Erro");
			break;
	}
}