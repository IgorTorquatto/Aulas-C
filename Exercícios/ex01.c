/* Faça um programa que receba um valor de uma compra, para se calcular o valor da
compra com desconto de 10% na compra e em seguida imprima o valor original da
compra e com desconto.*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void){
    float compra;


    printf("Insira o valor da sua compra aqui: ");
    scanf("%f",&compra);

    float desconto=(compra- compra*0.1);

    printf("O valor da compra orignial era de: %.2f e com o desconto ficou: %.2f.",compra,desconto);




    return 0;
}