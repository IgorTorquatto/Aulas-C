#include <stdio.h>

void incremento(int *x){
	*x+=1;
}
int main(){
	int a =10;
	incremento(&a);
	printf("%d",a);

	return 0;
}