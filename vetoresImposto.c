#include <stdio.h>

/*
crie um programa que le um imposto e, em seguida, le os salarios de um funcionario ao longo do ano,
e em seguida deve aplicar este imposto a cada salario. O imposto deve
estar entre 0 e 100 (inclusos). Caso o usuario digite um valor fora da faixa,
eh necessario ler novamente. No final, exibe o valor do salario correspondente a cada mes
e o salario anual total
*/

int main(){
	int i;
	float salario[12], somatorio, imposto;
	
    printf("Digite o imposto a ser aplicado. Deve estar entre 0 e 100: ");
  	scanf("%f", &imposto);
  
  	while( imposto<0 || imposto>100 ){
    	printf("Valor invalido! Digite um valor entre 0 e 100!");
    	scanf("%f", &imposto); 
  	}
  
	for( i=0, somatorio=0 ; i<12 ; i++ ){
		printf("Digite o salario do mes %d: ", i);
		scanf("%f", &salario[i]);
    	salario[i] = salario[i] * (1 - (imposto/100));
    	somatorio = somatorio + salario[i];
	}
	
	for( i=0 ; i<12 ; i++ ){
		printf("Salario mes %d: %f\n", i, salario[i]);
	}
	
	printf("Total anual: %f\n", somatorio);
	
	return 0;
}
