#include <stdio.h>
//Devemos usar a biblioteca a seguir para Alocação Dinâmica:
#include <stdlib.h>

int main(int argc, char *argv[]) {
    //Criação do ponteiro:
	int *v;
    //Passamos o tamanho de espaço a ser alocado com a função malloc. Tudo isso fica dentro da variável v.
    //Usamos o sizeof para determinar o tamanho da mémoria a ser usada. Nesse caso será 4 bytes por ser um int.
	v=(int*)malloc(sizeof(int));
	printf("Digite um número \n:");
	scanf("%d",v);
	printf("%d \n",*v);
    //Liberamos a memória que já foi usada com a função free, nela colocamos a variável v ,que foi a que usamos.
	free(v);
	return 0;
}