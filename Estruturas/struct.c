#include <stdio.h>

struct pessoa{
    int idade;
    float altura
};

int main(){
    struct pessoa joao={.idade=18, .altura=1.67};

    printf("Idade : %d  Altura : %f",joao.idade,joao.altura);
    
    if(joao.altura>=1.80){
        printf("Joao é alto \n");
    }else{
        printf("Joao não é alto \n");
    }
    return 0;
}