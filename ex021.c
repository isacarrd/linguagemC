#include <stdio.h>

int main(){
	int menu;
	int save;
	int config;
	
	printf(" 4 resident evil (tm) \n");
	printf("[1] NOVO JOGO \n");
	printf("[2] CARREGAR \n");
	printf("[3] MARCADORES \n");
	printf("[4] AJUDA E OPCOES \n");
	printf("[5] SAIR \n");
	printf("DIREITOS RESERVADOS - CAPCOM \n");
	scanf("%d", &menu);
	
	switch(menu){
		case 1:
			printf("Aguarde. . .");
			break;
		case 2:
			printf("Selecione o save: \n");
			printf("[1] Fim do Capitulo 01:33:50 \n");
			printf("[2] Maquina de Escrever 01:50:33 \n");
			printf("[3] Maquina de Escrever 02:25:16 \n");
			scanf("%d", &save);
			switch(save){
				case 1:
					printf("Carregando. . . \n");
					break;
				case 2:
					printf("Carregando. . . \n");
					break;
				case 3:
					printf("Carregando. . . \n");
					break;
				case 4:
					printf("Carregando. . . \n");
					break;
			}
			break;
		case 3:
			printf("Seu ranking: #100 \n");
			break;
		case 4:
			printf("CONFIGURACOES \n");
			printf("[1] Resolucao \n");
			printf("[2] Atalhos teclado \n");
			printf("[3] Configuracao de Video \n");
			scanf("%d", &config);
			switch(config){
				case 1:
					printf("Resolucao: 1920 x 1080p");
					break;
				case 2:
					printf("ATIRAR - BOTAO ESQUERDO MOUSE \n");
					printf("RECARREGAR - BOTAO DIREITO MOUSE \n");
					printf(". . . \n");
					printf("COMANDAR ASHLEY - Z \n");
					printf(". . . \n");
					break;
				case 3:
					printf("QUALIDADE DAS SOMBRAS < MEDIO > \n");
					printf(". . . \n");
					printf("LEGENDAS < SIM > \n");
					printf(". . . \n");
					break;
				default:
					printf("OPCAO NAO DISPONIVEL");
					break;
			}
			break;
		case 5:
			printf(". . . \n");
			break;
		default:
			printf("Erro ALT F4");
			break;
	}
	
}