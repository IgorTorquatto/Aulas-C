#include <stdio.h>

int main(){
	int i;
	for(i=0;i<=30;i+=2){
		if((i==10)||(i==20)){
			continue;
		}
		printf("%d \n",i);
	}
	return 0;
}