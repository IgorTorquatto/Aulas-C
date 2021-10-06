#include <stdio.h>
#include <iostream>

int main (void){
	int pedido;
	printf("Informe o número do seu pedido (1-4): ");
	scanf("%d",&pedido);
	
	switch (pedido){
		case 1 :
			printf("Batata frita. \n");
			break;
		case 2 :
			printf("Pastel. \n");
			break;
		case 3 :
			printf("Pizza. \n");
			break;
		case 4 :
			printf("Coxinha \n");
			break;	
	}
	printf("Pedido realizado com sucesso.");
}