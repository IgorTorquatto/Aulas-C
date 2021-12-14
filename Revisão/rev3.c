#include <stdio.h>


int main(){
	int x [5]={2,4,6,8,10};
	int *p=x;
	printf("%d",*(p+3));
/* *p = 2 *(P+1)=4 *(P+2)=6 *(P+3)=8*/
	return 0;
}