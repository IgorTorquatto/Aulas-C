#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int *v;
    //Criamos, normalmente, com a função malloc, uma variável capaz de receber dados com o tamanho de um inteiro apenas:
	v=(int*)malloc(sizeof(int));
	printf("Digite um número \n:");
	scanf("%d",v);
    //Adicionamos mais um espaço nessa variável v usando a função realloc. Nela colocamos a variável v e depois o novo tamanho:
    v=(int*)realloc(v,2*sizeof(int));
    printf("Digite um número \n:");
    scanf("%d",v+1);
    printf("%d %d",*v,*(v+1));
    //Liberamos a memória utilizada com a função free:
	free(v);
	return 0;
}