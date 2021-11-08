#include <stdio.h>
/*Faça um algoritmo que imprima a contagem regressiva de 10 a 1 e imprima Fogo! na tela */

int main(){
    int i=10;
    while ( i>=1){
        printf("%d \n",i);
        i=i-1;
    }
    printf("Fogo! ");

    return 0;
}