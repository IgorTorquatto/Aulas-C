#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int *v;
	v=(int*)malloc(sizeof(int));
	printf("Digite um número \n:");
	scanf("%d",v);
    v=(int*)realloc(v,2*sizeof(int));
    printf("Digite um número \n:");
    scanf("%d",v+1);
    printf("%d %d",*v,*(v+1));
	free(v);
	return 0;
}