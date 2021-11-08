#include <stdio.h>
/*Faça um algoritmo que imprima os números pares entre 1 e n (Considere n um valor digitado pelo usuário) */

int main(){

    int n,i =1;
    printf("Digite um valor: \n");
    scanf("%d", &n);

    while(i<=n){
        if(i%2==0){
            printf("%d",i);
        }
        i=i+1;
    }

    return 0;
}