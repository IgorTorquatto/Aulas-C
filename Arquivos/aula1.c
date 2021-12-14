#include <stdio.h>

int main(){
	FILE *pont_arq;
	char palavra [20];
	
	pont_arq=fopen("teste.txt","w");
		printf("Escreva uma palavra para testar a função : \n");
		scanf("%s",palavra);
		fprintf(pont_arq,"%s",palavra);
	fclose(pont_arq);
	
	return 0;
}