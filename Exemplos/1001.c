#include <stdio.h>

/*
crie um programa em C que troca o conteudo de duas variaveis
*/

int main(){
	int a, b, x;

	scanf("%d%d", &a, &b);

	x = a + b;

	printf("X = %d\n", x);
	return 0;
}