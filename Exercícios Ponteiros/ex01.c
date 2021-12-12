#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba um número inteiro e verifique se o valor é menor do que 1, caso o valor digitado seja menor do que 1
peça ao usuário para informar um novo valor. Depois calcule e imprima o fatorial desse número.*/

int main(int argc, char *argv[]) {
	int valor,*valor_pont,fat,*fat_pont,i;
    valor_pont=&valor;

    do{
        printf("Digite um número : \n");
        scanf("%d",valor_pont);
    }while(valor<1);

    i=valor;
    fat=1;
    fat_pont=&fat;

    while(i>1){
        *fat_pont*=i;
        i--;
    }

    printf("O fatorial de um número %d é : %d",valor,fat);
    return 0;
}