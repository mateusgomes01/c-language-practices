#include <stdio.h>

/*
crie um programa que gere a seguinte saida:
***
*****
*******
*****
***
*/

void imprimeAsterisco(int n){
  int i;

	for( i=1 ; i<=n ; i++ ){
		printf("*");
	}
	printf("\n");
}

int main(){

	imprimeAsterisco(3);
	imprimeAsterisco(5);
	imprimeAsterisco(7);
	imprimeAsterisco(5);
	imprimeAsterisco(3);

	return 0;
}