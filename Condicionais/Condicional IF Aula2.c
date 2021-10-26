#include <stdio.h>

int main(void){
    int idade;
    printf("Digite  a idade do seu carro: \n");
    scanf("%d",&idade);

    if(idade<=3){
        printf("Seu carro é novo. \n");
    }
    if(idade>3){
        printf("Seu carro é velho. \n");
    }

    printf("PROGRAMA FINALIZADO.");
    return 0;
}