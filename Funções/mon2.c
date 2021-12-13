#include <stdio.h>
#include <stdlib.h>

int multi(int,int);

int main(){

		int valor;
		printf("Digite um numero:");
		scanf("%d",&valor);
		valor=multi(5,valor);
		printf(" Multiplicação de 5 e o valor digitado: %d",valor);
		
    return 0;
}

int multi(valor1,valor2){
	return valor1*valor2;
}

