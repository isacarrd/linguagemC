#include <stdio.h>
//#include <math.h>

int main(){
	//USUARIO	
	float renda_mensal;
	float usu_emp;
	int usu_parc = 0;
	
	//SISTEMA
	int valtot_emp;
	int prestacao_max;
	float parcelas;
	int parcelas_arr;
	
	//ENTRADAS
	printf("Insira sua renda mensal: \n");
	scanf("%f", &renda_mensal);
	printf("Insira o valor desejado do emprestimo: \n");
	scanf("%f", &usu_emp);
	printf("Insira o valor das prestacoes que pagara: \n");
	scanf("%f", &usu_parc);
	
	//CALCULOS
	valtot_emp = renda_mensal*10;
	prestacao_max = renda_mensal*0.30;
	
	/*
	parcelas = valtot_emp/prestacao_max;	
	parcelas_arr = (int)round(parcelas); */
	
	//COMPARACAO
	if(valtot_emp <= usu_emp && usu_parc <= prestacao_max){
		printf("Emprestimo concedido!");
	} else{
		printf("Emprestimo nao concedido.");
	}
	
}