#include <stdio.h>
#include <locale.h>

/*Faça um programa que coverta de graus celsius para farenheit um temperatura */

int main(){
    setlocale(LC_ALL,"Potuguese");
    float celsius,farenheit ;

    printf("Digite o valor da temperatura em graus Celsius: \n");
    scanf("%f",&celsius);

    farenheit= (9*celsius)/5 +32;

    printf("O valor da temperatura %.1f C em Farenheit é de : %.1f F",celsius,farenheit);

    
    return 0;
}