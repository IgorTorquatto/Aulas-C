#include <stdio.h>

int ouro=0;

void minerar(int quantidade){
    ouro+=quantidade;
}

int main(){
    minerar(20);
    printf("Quantidade de ouro: %d",ouro);
    return 0;
}