#include <stdio.h>

/*
crie um programa que armazene os dados de uma pessoa:
nome
sexo
idade
cpf
altura
*/

struct Person{
	char name[30];
	char sex;
	int age;
	int cpf;
	float height;
};

int main(){
	struct Person myPerson;
	
	printf("Digite o nome: ");
	scanf(" %s", myPerson.name);
	printf("Digite o sexo: ");
	scanf(" %c", &(myPerson.sex));
	printf("Digite a idade: ");
	scanf(" %c", &(myPerson.age));
	printf("Digite o cpf: ");
	scanf(" %c", &(myPerson.cpf));
	printf("Digite a altura: ");
	scanf(" %c", &(myPerson.height));
	
	myPerson.age++;
	
	printf("Nova idade: %d\n", myPerson.age);
	
	return 0;
}