#include <stdio.h>

/*
crie um programa que le os salarios de um funcionario ao longo do ano,
e tambem le um imposto para ser aplicado em cada salario. O imposto deve
estar entre 0 e 100 (inclusos). Caso o usuario digite um valor fora da faixa,
eh necessario ler novamente. No final, exibe o valor do salario correspondente a cada mes
e o salario anual total
*/

int main(){
	int i;
	float salario[12];
	
	for( i=0 ; i<12 ; i++ ){
		scanf("%f", &salario[i]);		
	}
	
	for( i=0 ; i<12 ; i++ ){
		printf("Salario mes %d: %f\n", i, salario[i]);		
	}
	
	return 0;
}
