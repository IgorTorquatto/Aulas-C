#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int *v;
	v=(int*)malloc(2*sizeof(int));
	printf("Digite um número \n:");
	scanf("%d",v);
    printf("Digite um número \n:");
	scanf("%d",v+1);
	printf("%d  %d\n",v[0],v[1]);
	free(v);
	return 0;
}