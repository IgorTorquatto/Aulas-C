#include <stdio.h>

int main(){
    int a =5;
    char c="a";
    int *ponteiro_a = &a;
    char *ponteiro_c = &c;

    printf("Acessando c por ponteiro_c: %c \n",*ponteiro_c);
    printf("Aessando a por ponteiro_a: %d \n",*ponteiro_a);

    *ponteiro_c="b";
    *ponteiro_a=1000;

    printf("Valor de c : %c",c);
    printf("Valor de a: %d",a);


    return 0;
}