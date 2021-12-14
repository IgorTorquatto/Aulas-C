#include <stdio.h>

/*Escreva um programa que imprima um vetor
de inteiros com 10 posições na ordem inversa
endereçando os elementos com um ponteiro*/

int main () {
	//Criação da variávl,vetor e ponteiro:
	int x[10], i, *p;
	//Recebe 10 valores e aloca-os no vetor em cada posição i.
	for (i = 0 ; i < 10 ; i++) {
	scanf("%d", &x[i]);
	}
	p = x + 9; 
	//Impressão da ordem inversa:
	for (i = 0 ; i < 10 ; i++) {
	printf("%d ", *p);
	p--;
	}
return 0;
}