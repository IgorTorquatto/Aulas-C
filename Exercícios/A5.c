#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*Faça um programa que receba um número racional, calcule e imprima o teto desse
número. (Exemplo: Caso o valor inserido seja o número 2.12331211 o sistema deve
imprimir o número 3.00).*/

int main(void){
    float numero;

    printf("Digite um número racional: ");
    scanf("%f",&numero);

    float teto= ceil(numero);
    printf("O teto do valor %f é %.0f",numero,teto);

    return 0;
}