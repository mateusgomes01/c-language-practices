#include <stdio.h>

/*
crie um programa em C que troca o conteudo de duas variaveis
*/

int main(){
	int a = 5, b = 7, c;

	printf("%d, %d\n", a, b); //5 7

	//algoritmo
	c = a;
	a = b;
	b = c;

	printf("%d, %d\n", a, b); //7 5
	return 0;
}