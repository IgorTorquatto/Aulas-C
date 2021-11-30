#include <stdio.h>
#include <string.h>


int main(){
    	int i;
    	char nome [50];
    	printf("Insira seu nome: \n");
    	gets(nome);
    	
    	for(i=0;i<strlen(nome);i++){
    		if(nome[i]==' '){
    			printf("\n");
			}else{
				printf("%c",nome[i]);
			}
		}
   
    
    
    return 0;
}