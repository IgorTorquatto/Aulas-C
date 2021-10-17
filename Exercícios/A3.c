#include <stdio.h>

/*Uma empresa de aluguel de carros deseja adquirir um sistema de autoatendimento
para seus clientes, onde informando o total de dias e o número quilômetros que se
planeja percorrer com o carro alugado o sistema informe o valor do aluguel a ser
pago. Faça um programa que receba o número de dias e quilômetros, para se calcular
o valor que um cliente deve pagar (use o valor do aluguel por dia de R$80,00 e o valor
adicional por quilômetro rodado igual a R$0,09), imprima o valor final na tela. */

int main (){
	int dias;
	float km;
	
	printf("Digite o número de dias que o veiculo será alugado: \n");
	scanf("%d",&dias);
	
	printf("Digite o número de Km que se planeja percorrer com o carro: \n");
	scanf("%f",&km);
	
	float valor=(dias*80 )+km*0.09;
	printf("O valor total do aluguel é: %.2f R$",valor);
	
	return 0;
}