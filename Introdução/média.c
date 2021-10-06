#include <stdio.h>

int main (void){
	int matricula=456;
	float nota1;
	float nota2;
	float nota3;

	printf("Atribua a 1 nota ao aluno de matrícula %d :",matricula);
	scanf("%f",&nota1);
	printf("Atribua a 2 nota ao aluno de matrícula %d :",matricula);
	scanf("%f",&nota2);
	printf("Atribua a 3 nota ao aluno de matrícula %d :",matricula);
	scanf("%f",&nota3);
	float media=(nota1+nota2+nota3)/3;
		
	printf("A média do aluno é : %.2f .",media);


	
	return 0;
}