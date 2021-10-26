#include <stdio.h>

int main(void){
    float salario;
    printf("Digite o valor do seu salario: \n");
    scanf("%f",&salario);

    if(salario>1250){
        float aumento= salario*0.1;
        printf("O aumento do seu salário será de: %.2f R$. \n",aumento);
    }else{
        float aumento2=salario*0.15;
        printf("O aumento do seu salario será de: %.2f R$.\n",aumento2);
    }
    printf("Programa finalizado");

    return 0;
}