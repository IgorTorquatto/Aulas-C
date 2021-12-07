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
    int a=f(5);
    printf("%d \n",a);
    return 0;
}