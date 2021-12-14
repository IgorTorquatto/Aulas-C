#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int *v;
    /*Dessa vez, usamos a função malloc para alocarmos o dobro do espaço do exemplo anterior, 
    para isso multiplicamos o sizeof por 2.
    */
	v=(int*)malloc(2*sizeof(int));
	printf("Digite um número \n:");
	scanf("%d",v);
    printf("Digite um número \n:");
    //Para colocarmos o segundo valor em v passamos o v+1:(Poderia ser: &v[1])
	scanf("%d",v+1);
    //Imprimimos ,agora, usando os dois valores de v, tanto na posição 1(v[0]) como na posição 2(v[1]):
    //Poderíamos usar também: *v e *(v+1) 
	printf("%d  %d\n",v[0],v[1]);
    //Liberamos o espaço:
	free(v);
	return 0;
}