#include <stdio.h>


int main(){
	int a [5]={5,8,7,6,4};
	int *p=a;
	printf("%d",*(p+1));

	return 0;
}