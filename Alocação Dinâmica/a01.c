#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int *v;
	v=(int*)malloc(sizeof(int));
	printf("Digite um número \n:");
	scanf("%d",v);
	printf("%d \n",*v);
	free(v);
	return 0;
}