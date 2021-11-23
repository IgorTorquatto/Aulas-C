#include <stdio.h>
#include <locale.h>
/*Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento dele e a posição desse elemento.*/

int main(){
    setlocale(LC_ALL,"Portuguse");
    int numeros[10];
    int i;

    for(i=0;i<10;i++){
        printf("Digite um número inteiro: \n");
        scanf("%d",&numeros[i]);
    }

     for(i=0;i<10;i++){
        printf("O número da posição %d é %d \n",i,numeros[i]); 
    }

    int maior=0;
     for(i=0;i<10;i++){
        if(numeros[i]>maior){
            maior=numeros[i];
        }
    }

    printf("O maior número do vetor é %d  ",maior);


    return 0;
}