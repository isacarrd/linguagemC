#include <stdio.h>

int main(){
	int escolha;
	int escolha2;
	
	float km = 0.0;
	float milhas = 0.0;
	
	float tk = 0.0;
	float tc = 0.0;
	float tf = 0.0;
	
	do{
    printf("Escolha a Unidade de Medida desejada: \n");
    printf("[1] Milhas \n");
    printf("[2] Temperatura \n");
    printf("[0] SAIR \n");
    scanf("%d", &escolha);
    
    switch(escolha){
      case 1:
        printf("Escolha a conversao desejada: \n");
        printf("[1] Quilometros para Milhas \n");
        printf("[2] Milhas para Quilometros \n");
        scanf("%d", &escolha2);
        switch(escolha2){
          case 1:
            printf("Insira quantos KM deseja converter: \n");
            scanf("%f", &km);
            milhas = km*0.621371;
            printf("Milhas %.2f \n", milhas);
            break;
          case 2:
            printf("Insira quantas milhas deseja converter: \n");
            scanf("%f", &milhas);
            km = milhas*1.60934;
            printf("Quilometros: %.2f \n", km);
            break;
          default:
            printf("Opcao nao disponivel! \n");
            break;
        }
    	break;
      case 2:
        printf("Qual sera a conversao executada: \n");
        printf("[1] Celsius para kelvin \n");
        printf("[2] Kelvin para celsius \n");
        printf("[3] Celsius em fahrenheit \n");
        printf("[4] Fahrenheit em celsius \n");
        printf("[5] Kelvin para fahrenheit \n");
        printf("[6] Fahrenheit para kelvin \n");
        scanf("%d", &escolha2);
        switch(escolha2){
          case 1:
            printf("[1] Insira a temperatura Celsius: \n");
            scanf("%f", &tc);
            tk = tc + 273.15;
            printf("Temperatura: %.2f K \n", tk);
            break;
          case 2:
            printf("[2] Insira a temperatura Kelvin: \n");
            scanf("%f", &tk);
            tc = tk - 273.15;
            printf("Temperatura: %.2f C \n", tc);
            break;
          case 3:
            printf("[3] Insira a temperatura Celsius: \n");
            scanf("%f", &tc);
            tf = (tc * 9 / 5) + 32;
            printf("Temperatura: %.2f F \n", tf);
            break;
          case 4:
            printf("[4] Insira a temperatura Fahrenheit: \n");
            scanf("%f", &tf);
            tc = (tf - 32) * 5 / 9;
            printf("Temperatura: %.2f C \n", tc);
            break;
          case 5:
            printf("[5] Insira a temperatura Kelvin: \n");
            scanf("%f", &tk);
            tf = (tk - 273.15)* 9 / 5 + 32;
            printf("Temperatura: %.2f F \n", tf);
            break;
          case 6:
            printf("[6] Insira a temperatura Fahrenheit: \n");
            scanf("%f", &tf);
            tk = (tf - 32) * 5 / 9 + 273.15;
            printf("Temperatura: %.2f F \n", tk);
            break;
          default:
            printf("Opcao nao disponivel! \n");
            break;
        }
        break;
        
        case 0:
        	printf("Encerrando programa \n");
        	break;
        default:
        	printf("Opcao invalida! \n");
        	break;
    }
  } while(escolha !=0);
  return 0;
}