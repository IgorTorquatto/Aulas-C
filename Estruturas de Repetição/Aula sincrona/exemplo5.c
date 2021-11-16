#include <stdio.h>

int main (){
    int fat=1,n;
    printf("Qual fatorial você quer calcular? \n");
    scanf("%d",&n);

    while(n>0){
        fat=fat*n;
        n--;

    }
    if(n<0){
        printf("Valor inválido");
    }
    else{
        printf("fat: %d ",fat);
    }

    return 0;
}