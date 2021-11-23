#include <stdio.h>
#include <locale.h>
/*Um parque ficou aberto durante 5 dias. Faça um algoritimo que receba do usuário a quantidade de pessoas que foram ao parque em cada dia. Armazene os valores em um vetor
Calcule a quantidade total de pessoas que foram ao parque e a média de pessoas por dia no parque.
*/

int main(){
    setlocale(LC_ALL,"Portuguese");
    int quantidade_pessoas[5];
    int i;
    
    for (i=0;i<5;i++){
        printf("Quantas pessoas foram ao parque no dia %d \n?",i);
        scanf("%d",&quantidade_pessoas[i]);
    }
    printf("Quantidade de pessoas nos respectivos dias: \n");

    int soma;
    for (i=0;i<5;i++){
        printf("Dia: %d , Quantidade: %d \n",i,quantidade_pessoas[i]); 
        soma= soma + quantidade_pessoas[i];
    }
    printf("Quantidade de pessoas nos 5 dias : %d",soma);
    
    float media=soma/5;
    
    printf("Média: %.2f",media);



    return 0;
}