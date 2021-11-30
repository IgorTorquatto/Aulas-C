#include <stdio.h>


int main(){
    
    float nota[30],media;
    int i;
    
    for(i=0;i<30;i++){
    	printf("Digite a nota do aluno %d: \n",(i+1));
    	scanf("%f",&nota[i]);
	}
	media=0.0;
	for(i=0;i<30;i++){
		media+=nota[i];
	}
	media=media/30.0;
	printf("A media da turma foi de : %.2f \n",media);
	for(i=0;i<30;i++){
		if(nota[i]>media){
		printf("Aluno %d teve nota acima da média \n",(i+1));
		}
	}
    
    
    
    return 0;
}