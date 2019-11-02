#include <stdio.h>

/*
crie um programa que recebe 2 valores e um operador (+, -, *, /)
e que exibe na tela o resultado para o usuario

sugestao: utilize funcao
*/

//oioioi


int calcula(int a, int b, char op){
	if(op == '+'){
		return a + b;
	} else if(op == '-'){
		return a - b;
	} else if(op == '*'){
		return a * b;
	} else if(op == '/'){
		return a / b;
	} else {
		printf ("operador invalido\n");
    return 0;
	}
}

int main(){
	int a, b, res;
	char op;

	printf("digite 2 valores: ");
	scanf("%d%d", &a, &b);
	printf("digite o operador desejado");
  	//fflush(stdin);
	scanf(" %c", &op);

	res = calcula(a,b,op);

	printf("Resultado: %d\n", res);

	return 0;
}