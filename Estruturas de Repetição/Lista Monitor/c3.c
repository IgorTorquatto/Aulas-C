#include <stdio.h>
#include <locale.h>

/*Faça um programa que receba um número inteiro e verifique se o valor é menor que
1, caso o valor digitado seja menor que 1 peça ao usuário para informar um novo
valor (Faça essa ação até o valor digitado se tornar valido). Depois, calcule e imprima
o fatorial deste número.*/

int main(){
    setlocale(LC_ALL,"Portuguese");
    int num;

    do{
        printf("Por favor, digite um  número: \n");
        scanf("%d",&num);
    }while(num<=0);
    
    printf("Número válido \n");

    int i, fatorial=1;

    for(i=1;i<=num;i++){
        fatorial= fatorial * i;
    }
    printf("O fatorial do número %d é %d .",num, fatorial);

    return 0;
}