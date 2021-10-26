#include <stdio.h>

/*Faça um programa que receba dois número e informe se o primeiro número é
divisível pelo segundo número.*/

int main(){
	int num1,num2;
	printf("Digite um numero inteiro: \n");
	scanf("%d",&num1);
	printf("Digite outro numero inteiro: \n");
	scanf("%d",&num2);
	
	if(num1 % num2 ==0){
		printf("O primeiro numero e divisivel pelo segundo. \n");
	}
	else{
		printf("O primeiro numero nao e divisivel pelo segundo \n");
	}
	
	printf("Programa finalizado.");
	
	return 0;
}