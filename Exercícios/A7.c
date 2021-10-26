#include <stdio.h>
#include <math.h>
/*Faça um programa que receba o valor do comprimento de um dos catetos e da
hipotenusa de um triangulo retângulo. Em seguida calcule e imprima o valor do lado
do triangulo restante e o seu perímetro.*/

int main() {
	float cateto1,hipotenusa;
	
	printf("Digite o valor do cateto do triangulo: \n");
	scanf("%f",&cateto1);
	printf("Digite o valor da hipotenusa do triangulo: \n");
	scanf("%f",&hipotenusa);
	
	float cateto2,perimetro;
	cateto2=sqrt(pow(hipotenusa,2)-pow(cateto1,2));
	perimetro=cateto1+cateto2+hipotenusa;
	
	printf("O segundo cateto é o %f e o perimetro do triangulo é : %f \n",cateto2,perimetro);
	
	
	printf("Programa Finalizado");
	return 0;
}