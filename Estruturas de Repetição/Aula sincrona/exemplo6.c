#include <stdio.h>
//usando o ++
int main (){
    int i=1,n,fat=1;
    do{
        printf("Digite um número: \n");
        scanf("%d",&n);
    }while(n<=0);

    while(i<=n){
        fat=fat*i;
        i++ ;
    }

    printf("O fatorial do numero %d é %d",n,fat);
    return 0;
}