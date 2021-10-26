#include <stdio.h>

/*Faça um programa que receba um número e informe se o número digitado é par ou
impar.*/

int main(){
	int numero;
	printf("Digite um numero inteiro: \n");
	scanf("%d",&numero);
	
	if(numero % 2 == 0){
		printf("Numero par \n");
	}
	else{
		printf("Numero Impar \n");
	}
	
	printf("Programa finalizado.");
	return 0;
}