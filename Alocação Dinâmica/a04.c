#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i,valor,tamanho=0,*v;
	v=(int *)malloc(sizeof(int));
	printf("Digite um numero: \n");
	scanf("%d",&valor);
	
	while(valor!=2){
		tamanho++;
		v=(int *)realloc(v,tamanho*sizeof(int));
		v[tamanho-1]=valor;
		printf("Digite um numero: \n");
		scanf("%d",&valor);
	}

	for(i=0;i<tamanho;i++){
		printf("%d",v[i]);
	}
	free(v);
}