#include <stdio.h>

int main(){
	char* mensagem;
	char* escolha_str;
	int escolha;
	
	printf("Escolha seu idioma de preferencia: \n");
	printf("[1] Ingles. \n");
	printf("[2] Espanhol. \n");
	printf("[3] Frances. \n");
	scanf("%d", &escolha);
	
	switch(escolha){
		case 1:
			escolha_str = "Ingles";
			mensagem = "Wellcome!";
			break;
		case 2:
			escolha_str = "Espanhol";
			mensagem = "Bienvenido!";
			break;
		case 3:
			escolha_str = "Frances";
			mensagem = "Bienvenue!";
			break;
		default:
			escolha_str = "Nulo";
			mensagem = "Idioma nao disponivel.";
			break;
	}
	
	printf("Idioma escolhido: %s. \n", escolha_str);
	printf("%s", mensagem);
}