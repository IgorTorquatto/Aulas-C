/*Faça um programa em que receba um número e em seguida calcule e imprima:
a) Esse número na 2a potência;
b) Esse número na 5a potência;
c) Esse número na 9a potência;
d) Esse número na 10a potência. */
#include <stdio.h>
#include <math.h>

int main(){
    float numero;
    float n2,n3,n4,n5;
    printf("Insira um numero: ");
    scanf("%f",&numero);

    n2=pow(numero,2);
    n3=pow(numero,5);
    n4=pow(numero,9);
    n5=pow(numero,10);

    printf("O numero %.2f na 2a potencia: %.2f \n",numero,n2);
    printf("O numero %.2f na 5a potencia: %.2f \n",numero,n3);
    printf("O numero %.2f na 9a potencia: %.2f \n",numero,n4);
    printf("O numero %.2f na 10a potencia: %.2f \n",numero,n5);

    return 0;
}