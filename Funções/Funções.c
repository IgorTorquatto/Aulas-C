#include <stdio.h>

int fatorial(int n){
    int fat=1;
    int i;
    for(i=1;i<=n;i++){
        fat*=fat;
    }
    return fat;
}

int primo(int n){
    int result=0;
    int n_div=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            n_div++;
        }
    }
    if(n_div==2){
        result=1;
    }
    return result;
}

int main(){

    printf("Fatorial de 5: %d",fatorial(5));
    int resultado=primo(5);
    if(resultado==1){
        printf("5 é primo");
    }
    return 0;
}