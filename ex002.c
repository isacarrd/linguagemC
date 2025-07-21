#include <stdio.h>

int main(){
	
	char nome[50] = "";
	int sexo;
	int estado_civil;
	int tempo;
	
	char* conv_sex;
	char* conv_civil;
	
	printf("Insira seu nome: \n");
	scanf("%s", &nome);
	
	printf("Sexo: \n");
	printf("[1 - Feminino] \n");
	printf("[2 - Masculino] \n");
	scanf("%d", &sexo);
	
	
	printf("Insira seu estado civil: \n");
	printf("[1] Solteiro(a). \n");
	printf("[2] Namorando. \n");
	printf("[3] Casado(a). \n");
	printf("[4] Viuvo(a). \n");
	scanf("%d", &estado_civil);
	
	
	if(sexo == 1 && estado_civil == 3){
		printf("Quanto tempo de casada voce tem? ");
		scanf("%d", &tempo);
	} 
	
	if(sexo == 1){
		conv_sex = "F";
	} else if(sexo == 2){
		conv_sex = "M";
	} else{
		conv_sex = "Desconhecido";
	}
	
	switch(estado_civil){
		case 1:
			conv_civil = "Solteiro(a)";
			break;
		case 2:
			conv_civil = "Namorando";
			break;
		case 3:
			conv_civil = "Casado(a)";
			break;
		case 4:
			conv_civil = "Viuvo(a)";
			break;		
		default:
			conv_civil = "Nulo";
			break;
	}

	printf("Dados:\n"); 
	printf("Nome: %s.\n", nome);
	printf("Sexo: %s. \n", conv_sex);
	printf("Estado Civil: %s. \n", conv_civil);
	printf("Tempo de Casado(a): %d anos.\n", tempo); 
}