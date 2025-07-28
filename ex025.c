#include <stdio.h>

int main(){
	int key_acess1 = 1;
	int key_acess2 = 2;
	int key_acess3 = 3;
	
	int key_acess = 0;
	
	do{
		printf("Insira a chave de acesso: \n");
		scanf("%d", &key_acess);
		
		if(key_acess!=key_acess1 && key_acess!=key_acess2 && key_acess!=key_acess3){
			printf("Chave errada! \n");
		}
		
	}while(key_acess!=key_acess1 && key_acess!=key_acess2 && key_acess!=key_acess3);
}