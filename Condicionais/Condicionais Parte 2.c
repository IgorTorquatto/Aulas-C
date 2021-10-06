#include <iostream>
#include <stdio.h>

int main(void) {
	
	float nota1;
	float nota2;
	float nota3;
	int faltas;
	
	printf("Insira a primeira nota do aluno: ");
	scanf("%f",&nota1);
	printf("Insira a segunda nota do aluno: ");
	scanf("%f",&nota2);
	printf("Insira a terceira nota do aluno: ");
	scanf("%f",&nota3);
	printf("Insira a quantidade de faltas do aluno durante o semestre: ");
	scanf("%d",&faltas);
	
	float media=(nota1+nota2+nota3)/3;
	printf("A média do aluno foi %.2f \n",media);
	
	if(media>=6){
		if(faltas<12){
			printf("Aprovado! \n");
		}else{
			printf("Reprovado! \n");
		}
	}else if(media>=5){
		if(faltas<12){
			printf("Aprovado! \n");
		}else{
			printf("Reprovado! \n");
		}
	}else{
		printf("Reprovado!");
	}
	
	
	return 0;
}