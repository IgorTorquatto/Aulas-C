#include <stdio.h>

int main(){
   int dia,mes,ano;
   do{
   	printf("Digite o dia do seu aniversario: \n");
   	scanf("%d",&dia);
   }while((dia<1)||(dia>31));
   printf("Dia valido. \n");
   
    do{
   	printf("Digite o mes do seu aniversario: \n");
   	scanf("%d",&mes);
   }while((mes<1)||(mes>12));
   printf("Mes valido. \n");
   
    do{
   	printf("Digite o ano do seu aniversario: \n");
   	scanf("%d",&ano);
   }while((ano<1920)||(ano>2022));
   printf("Ano valido. \n");
   
   printf("Seu aniversario : %d - %d - %d",dia,mes,ano);
	return 0;
}