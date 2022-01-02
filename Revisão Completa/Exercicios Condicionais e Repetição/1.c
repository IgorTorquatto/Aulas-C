#include <stdio.h>

int main(){
	int a,b;
	printf("Digite um número:");
	scanf("%d",&a);
	printf("Digite um número:");
	scanf("%d",&b);
	if(a>b){
		printf("O primeiro numero é maior do que o segundo");
	}
	else if(b>a){
		printf("O segundo numero é maior do que o primeiro");
	}
	else{
		printf("Os numero são iguais");
	}
	
	return 0;
}