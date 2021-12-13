#include <stdio.h>

int f(int x){
    if(x==0){
        return 1;
    }
    else{
        return x*f(x-1);
    }
}

int main(){
    int  a;
    printf("Digite um numero para ver seu valor fatorial:");
    scanf("%d",&a);
    printf("%d \n",f(a));
    return 0;
}