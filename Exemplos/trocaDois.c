#include <stdio.h>

/*
crie um programa que gere a seguinte saida:
********************
numeros de 1 a 5
********************
1
2
3
4
5
********************
*/

imprimeAsterisco(){
	for( i=1 ; i<=20 ; i++ ){
		printf("*");
	}
	printf("\n");
}

int main(){
	int i;

	imprimeAsterisco();

	printf("numeros de 1 a 5\n");

	imprimeAsterisco();

	for( i=1 ; i<=5 ; i++ ){
		printf("%d\n", i);
	}

	imprimeAsterisco();

	return 0;
}