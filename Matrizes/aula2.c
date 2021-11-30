#include <stdio.h>

int main(){
    	int i,j, matriz[3][3];
    	//Receber Matriz
    	for(i=0;i<3;i++){
    		for(j=0;j<3;j++){
    			printf("Digite o elemento [%d] [%d] \n",(i+1),(j+1));
    			scanf("%d",&matriz[i][j]);
			}
		}
		//Imprimir Matriz
		for(i=0;i<3;i++){
    		for(j=0;j<3;j++){
    			printf("%d \t",matriz[i][j]);
			}
			printf("\n");
		}
		
		//Diagonal 
		int soma=0;
		printf("Diagonal: \n");
		for(i=0;i<3;i++){
			printf("%d",matriz[i][i]);
			soma+=matriz[i][i];
		}
		printf("Soma dos elementos da diagonal da matriz: %d \n",soma);
		
		//Soma linhas
		int soma_linhas;

		for(i=0;i<3;i++){
				soma_linhas=0;
    		for(j=0;j<3;j++){
    			soma_linhas+=matriz[i][j];
			}
		float media=soma_linhas/3.0;
		printf("A média da soma da linha %d é %.2f \n",(i+1),media);
			
		}
    return 0;
}