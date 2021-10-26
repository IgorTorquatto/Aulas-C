#include <stdio.h>

/*Faça um programa que receba o peso e a altura de uma pessoa. Calculando e
imprimindo o IMC dessa pessoa, além de informar em seguida qual das seguintes
classificações a pessoa pertence.

? IMC menor que 20 – Abaixo do peso;
? IMC entre 20 e 25 – Peso normal;
? IMC entre 25 e 30 – Sobrepeso;
? IMC entre 30 e 40 – Obesidade;
? IMC maior que 40 – Obesidade grave..*/

int main(){
	float peso,altura,imc;
	printf("Insira o peso: \n");
	scanf("%f",&peso);
	printf("Insira a altura: \n");
	scanf("%f",&altura);
	
	imc=peso/(altura*altura);
	
	printf("O imc da pessoa é de : %f \n",imc);
	
	if(imc<20){
		printf("Abaixo do peso. \n");
	}
	else if((imc>=20)&&(imc<25)){
		printf("Peso Normal. \n");
	}
	else if((imc>=25)&&(imc<30)){
		printf("Sobrepeso. \n");
	}
	else if((imc>=30)&&(imc<40)){
		printf("Obesidade. \n");
	}
	else if(imc>=40){
		printf("Obesidade grave. \n");
	}
	else{
		printf("Invalido. \n");
	}
	
	printf("Programa finalizado");
	return 0;
}