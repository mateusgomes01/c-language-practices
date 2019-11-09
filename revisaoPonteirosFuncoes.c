#include <stdio.h>

/*
troca de variavel

troque o valor de duas variaveis, dessa vez usando funcao
*/

void troca(int a, int b){
	int c;

  printf("na funcao: A eh %d, B eh %d\n", a, b);// 5	7

	c = a;
	a = b;
	b = c;

  printf("na funcao: A eh %d, B eh %d depois da troca\n", a, b);// 5	7
	
}

int main(){
	int a, b, c;
	
	printf("Digite valors para A e B: ");
	scanf("%d%d", &a, &b);
	
	printf("A eh %d, B eh %d\n", a, b);// 5	7
	
	troca(a,b);
	
	printf("A eh %d, B eh %d depois da troca\n", a, b);// 5	7
	
	return 0;
}