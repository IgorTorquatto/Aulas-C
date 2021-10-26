#include <stdio.h>

int main(){
    float l1,l2,l3;
    printf("Digite três valores: \n");
    scanf("%f",&l1);
    scanf("%f",&l2);
    scanf("%f",&l3);

    if((l1<l2+l3)&&(l2<l1+l3)&&(l3<l1+l2)){
        printf("Existe \n");
        if((l1==l2)&&(l2==l3)){
            printf("Triangulo Equilatero \n");
        }
        else if((l1==l2)||(l1==l3)||(l2==l3)){
            printf("Triangulo Isosceles \n");
        }
        else{
            printf("Triangulo Escaleno \n");
        }

    }
    else{
        printf("Não é um triangulo \n");
    }

    printf("Programa Finalizado.");
    return 0;
}