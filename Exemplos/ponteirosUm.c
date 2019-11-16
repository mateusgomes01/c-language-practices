#include <stdio.h>

int main(){
	int amanda = 4477;
	int *SUETAM;

	SUETAM = &amanda;

	printf("%d\n", amanda);		//4477
	printf("%d\n", &amanda);	//500400
	printf("%d\n", SUETAM);		//500400
	printf("%d\n", &SUETAM);	//666666
	printf("%d\n", *SUETAM);  //

	(*SUETAM)++;// amanda = amanda + 1;
	amanda++;

	printf("%d\n", amanda);   //4478
	return 0;
}