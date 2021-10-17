#include <stdio.h>
#include <stdlib.h>

/* Melinda e Kauan são dois amigos que jogam xadrez por oito horas todos os dias. Faça
um programa que receba uma quantidade de anos e imprima:
 O total de tempo que eles jogaram xadrez juntos em horas;
 O total de tempo que eles jogaram xadrez juntos em minutos;
 O total de tempo que eles jogaram xadrez juntos em segundos.*/

int main(void){
    float anos;
    printf("Digite a quantidade de anos que Melinda e Kauan jogam xadrez: \n");
    scanf("%f",&anos);
    
    float dias= 365* anos;
    float horas= dias*8;
    float minutos=horas*60;
    float segundos=minutos*60;

    printf("Eles jogaram um total de %.0f horas, %.0f minutos e %.0f segundos.",horas,minutos,segundos);
    return 0;
}