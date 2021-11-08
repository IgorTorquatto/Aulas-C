#include <stdio.h>
/*Faça um algoritmo que calcule o fatorial de um número inteiro digitado pelo usuário*/

int main(){
    int valor,fatorial;
    printf("Digite um numero: \n");
    scanf("%d",valor);
    fatorial=1;

    while(valor>=1){
        fatorial=fatorial*valor;
        valor=valor-1;
    }
    
    printf(" Fatorial : %d",fatorial);
    return 0;
}