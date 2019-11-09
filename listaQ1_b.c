#include <stdio.h>
#include <string.h>

#define TAM 3

struct Funcionario{
	char nome[30];
	char cargo[30];
	char endereco[50];
	int cpf;
	int idade;
	double salario;
};

//implementar depois
/*mystrcmp(){
}
*/

double salarioCargo(struct Funcionario funcionarios[], char cargo[]){
	int i;
	double totalCargo;
	
	for( i=0 ; i<TAM ; i++ ){
		//strcmp retorna 0 se forem iguais
		//e retorna diferente de zero se forem diferentes
		if( strcmp(funcionarios[i].cargo, cargo)==0 ){
			totalCargo = totalCargo + funcionarios[i].salario;
		}
	}
	
	return totalCargo;
}

int main(){
	int i;
	struct Funcionario funcionarios[TAM];
	double totalSalarios;
	char cargo[30];
	
	for( i=0, totalSalarios=0 ; i<TAM ; i++ ){
		printf("Digite o nome: ");
		scanf(" %s", funcionarios[i].nome);
		printf("Digite o cargo: ");
		scanf(" %s", funcionarios[i].cargo);
		printf("Digite o endereco: ");
		scanf(" %s", funcionarios[i].endereco);
		printf("Digite o cpf: ");
		scanf("%d", &(funcionarios[i].cpf));
		printf("Digite a idade: ");
		scanf("%d", &(funcionarios[i].idade));
		printf("Digite o salario: ");
		scanf("%lf", &(funcionarios[i].salario));
		
		totalSalarios = totalSalarios + funcionarios[i].salario;
	}
	
	for( i=0 ; i<TAM ; i++ ){
		printf("Nome: %s - Salario: %f\n", funcionarios[i].nome, funcionarios[i].salario);
	}
	
	printf("Total de todos salarios: %f\n", totalSalarios);
	
	printf("Digite um cargo para ver o total dos salarios para este cargo: ");
	scanf(" %s", cargo);
	
	printf("Total para o cargo %s eh: %f\n", cargo, salarioCargo(funcionarios, cargo) );
	
	return 0;
}
