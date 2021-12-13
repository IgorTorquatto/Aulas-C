#include <stdio.h>
#include <stdlib.h>

char par(int valor){
	if(valor%2==0){
		printf("O numero e par.");
		return 's';
		
	}
	else{
		printf("O numero e ímpar");
		return 'n';
		
	}
}

int main(){

		int valor;
		printf("Digite um numero:");
		scanf("%d",&valor);
		printf("%c",par(valor));

    
    return 0;
}