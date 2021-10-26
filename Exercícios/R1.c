#include <stdio.h>

int main() {
	float hora;
	printf("Digite a hora: \n");
	scanf("%f",&hora);
	
	if((hora>3.0)&&(hora<=5.0)){
		printf("Madrugada \n");
	}
	else if((hora>5.0)&&(hora<=13.0)){
		printf("Manhã \n");
	}
	else if((hora>13.0)&&(hora<=18.0)){
		printf("Tarde \n");
	}
	else if((hora>18.0)&&(hora<=23.0)){
		printf("Noite \n");
	}
	else if((hora>23.0)&&(hora<24.0)||(hora<=3.0)&&(hora>=0.0)){
		printf("Tunts \n");
	}
	else{
		printf("Hora inválida \n");
	}
	
	printf("Programa Finalizado!");
	return 0;
}