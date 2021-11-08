#include <stdio.h>
/*Faça um algoritmo que imprima os 10 primeiros múltiplos de 3.*/

int main(){
    int cont=0;
    int i =1;
    
    while(cont<10){
        if(i % 3==0){
            cont=cont +1;
            printf(" Multiplo: %d \n",i);
        }
        i=i+1;
    }
    printf("Programa Finalizado!");
    return 0;
}