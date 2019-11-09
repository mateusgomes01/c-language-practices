#include <stdio.h>

/*
crie um programa que le os salarios de um funcionario ao longo do ano
e no final, exibe o valor do salario correspondente a cada mes
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