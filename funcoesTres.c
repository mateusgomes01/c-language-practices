#include <stdio.h>

/*
crie um programa que gere a seguinte saida:
***
#####
$$$$$$$
@@@@@
!!!
*/

void imprimeAsterisco(int n, char j){
  int i;

	for( i=1 ; i<=n ; i++ ){
		printf("%c", j);
	}
	printf("\n");
}

int main(){

	imprimeAsterisco(3,'*');
	imprimeAsterisco(5, '#');
	imprimeAsterisco(7, '$');
	imprimeAsterisco(5, '@');
	imprimeAsterisco(3, '!');

	return 0;
}