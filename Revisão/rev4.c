#include <stdio.h>


int main(){
	void *pv;
	int n = 10;
	float f = 3.5;
	pv = &n;
	printf("Inteiro: %d\n", *(int *)pv);
	pv = &f;
	printf("Real: %f\n", *(float *)pv);
	/*Exemplo de ponteiro genérico. Para usá-lo temos que fazer a conversão de dados com o ( int *) e ( float *).
	 Porém, pode ser útil para vários casos*/
	return 0;
}