#include <stdio.h>

scruct Funcionario{
	char nome[30];
	char cargo[30];
	char endereco[50];
	int cpf;
	int idade;
	double salario;
};

int main(){
	int i;
	struct Funcionario funcionarios[5];
	
	for( i=0 ; i<5 ; i++ ){
		printf("Digite o nome: ");
		scanf(" %s", funcionarios[i].name);
		printf("Digite o cargo: ");
		scanf(" %s", funcionarios[i].cargo);
		printf("Digite o endereco: ");
		scanf(" %s", funcionarios.endereco);
		printf("Digite o cpf: ");
		scanf(" %d", funcionarios[i].cpf);
		printf("Digite a idade: ");
		scanf(" %d", funcionarios[i].idade);
		printf("Digite o salario: ");
		scanf(" %lf", funcionarios[i].salario);
	}
	
	for( i=0 ; i<5 ; i++ ){
		printf("Nome: %s - Salario: %f\n", funcionarios[i].nome, funcionarios[i].salario);
	}
	
	return 0;
}