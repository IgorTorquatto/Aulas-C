#include <stdio.h>

int main(){
    	int i,j, matriz[3][3];
    	printf("Digite os elementos de uma matriz 3x3 : \n");
    		for(i=0;i<3;i++){
    			for(j=0;j<3;j++){
    				scanf("%d",&matriz[i][j]);
				}
			}
    	
   for(i=0;i<3;i++){
   	for(j=0;j<3;j++){
   		printf("%d \t",matriz[i][j]);
	   }
	   printf("\n");
   }
    return 0;
}