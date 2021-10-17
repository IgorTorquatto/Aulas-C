#include <stdio.h>
#include <stdlib.h>

/* O time de futsal amador União do Dragão Z deseja calcular o seu percentual de gols
em um campeonato. Faça um programa que receba o número de gols que o time
realizou no campeonato e o número total de gols no campeonato. Em seguida,
imprima o percentual de gols.*/

int main() {
	int golsTotal;
	int golsZ;
	
	printf("Qual o número total de gols do campeonato?");
	scanf("%d",&golsTotal);
	
	printf("Qual o número de gols do União do Dragão Z no campeonato?");
	scanf("%d",&golsZ);
	
	float percentual= (golsZ*100)/golsTotal;
	
	printf("O percentural de gols do time no campeonato foi de %.2f por cento.",percentual);
	return 0;
}