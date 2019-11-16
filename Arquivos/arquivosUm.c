#include <stdio.h>

int main(){
	int num;
	char nome[30], letra;
	FILE *input, *output;
	
	input = fopen("entrada.txt","r");
	
	output = fopen("saida.txt","w");//read & write => r & w

	//scanf("%d", &num);
	
	//num = num * 2;
	
	fscanf( input," %s", nome);
	
	fprintf( output,"%s", nome); // f vem de file
	
    return 0;
}
