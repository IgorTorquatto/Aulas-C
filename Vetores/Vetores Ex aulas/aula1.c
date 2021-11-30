#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    float notas[3];
    for(i=0;i<3;i++){
        printf("Digite as notas do aluno %d : \n",i+1);
        scanf("%f",&notas[i]);
        }
    printf("Primeira nota: %.2f \n",notas[0]);
    printf("Segunda nota: %.2f \n",notas[1]);
    printf("Terceira nota: %.2f \n",notas[2]);
    return 0;
}