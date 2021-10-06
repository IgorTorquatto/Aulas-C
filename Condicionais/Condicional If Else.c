#include <stdio.h>

int main (void){
	
	float nota1;
	float nota2;
	float nota3;

	printf("Informe a nota 1 do aluno: ");
	scanf("%f",&nota1);
	printf("Informe a nota 2 do aluno: ");
	scanf("%f",&nota2);
	printf("Infome a nota 3 do aluno: ");
	scanf("%f",&nota3);
	float media=(nota1+nota2+nota3)/3;
	
	if(media>=6){
		printf("Parabéns, você foi Aprovado!");
	}else if(media>=5){
		printf("Você irá realizar a avaliação final.");
	}else{
		printf("Você foi reprovado. Estude mais.");
	}
		
	return 0;
}