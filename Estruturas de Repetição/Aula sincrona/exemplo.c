#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero positivo: \n");
    scanf("%d",&n);

    while(n<=0){
        printf("Numero invalido. \n" );
        printf("Digite um numero positivo: \n");
        scanf("%d",&n);
    }
    printf("Numero valido");

    return 0;
}