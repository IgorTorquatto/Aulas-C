#include <stdio.h>

int main(){
    char letra;
    printf("Digite uma letra: \n");
    scanf("%c",&letra);

   if((letra=="a")||(letra=="e")||(letra=="i")||(letra=="o")||(letra=="u")||
   (letra=="A")||(letra=="E")||(letra=="I")||(letra=="O")||(letra=="U")){
       printf("Vogal \n");
   }
   else if((letra>="a")&&(letra<="z")||(letra>="A")&&(letra<="Z")){
       printf("Consoante \n");
   }
   else{
       printf("Caractere Inválido \n");
   }

    return 0;
}