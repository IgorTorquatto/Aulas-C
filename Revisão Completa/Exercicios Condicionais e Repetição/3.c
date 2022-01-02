#include <stdio.h>

int main(){
   int idade;
   printf("Digite sua idade: \n");
   scanf("%d",&idade);
   if((idade<18)||(idade>67)){
   	printf("Voce nao pode doar sangue");
   }
   else{
   	printf("Voce pode doar sangue");
   }
	return 0;
}