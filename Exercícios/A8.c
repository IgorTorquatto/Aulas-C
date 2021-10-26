#include <stdio.h>
#include <math.h>

/*Faça um programa que resolva uma equação de segundo grau dando os valores das
variáveis a, b’ e c (ax 2 + bx + c). (Considere somente equações onde delta>=0)*/

int main(){
	float a,b,c;
	printf("Digite o valor da variavel a da equacao: \n");
	scanf("%f",&a);
	printf("Digite o valor da variavel b da equacao: \n");
	scanf("%f",&b);
	printf("Digite o valor da variavel c da equacao: \n");
	scanf("%f",&c);
	
	float delta;
	delta=pow(b,2)-4*a*c;
	
	float raiz1,raiz2;
	raiz1= (-b+sqrt(delta))/(2*a);
	raiz2=(-b-sqrt(delta))/(2*a);
	
	printf("As raizes da equacao sao: %f , %f",raiz1,raiz2);
	
	return 0;
}