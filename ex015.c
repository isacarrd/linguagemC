#include <stdio.h>

int main(){
	int temp_ex = 0;
	
	printf("Qual a temperatura externa?: \n");
	scanf("%d", &temp_ex);
	
	if(temp_ex > 25 && temp_ex < 40){
		printf("Temperatura: %d Graus° \n", temp_ex);
		printf("Status: Ensolarado.");
	} else if(temp_ex < 15){
		printf("Temperatura: %d Graus° \n", temp_ex);
		printf("Status: Chuvoso.");
	} else if (temp_ex <= 25 && temp_ex >= 15){
		printf("Temperatura: %d Graus° \n", temp_ex);
		printf("Status: Nublado.");
	} else if(temp_ex >= 40){ /* fora do que é pedido :P*/
		printf("Temperatura: %d Graus° \n", temp_ex);
		printf("Status: Queimando!!!!!!");
	} else{
		printf("Status: Temperatura não registrada.");
	}
}