#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba uma struct que contenha as
informações de um produto alimentício (nome, lote, valor, data de
fabricação e data de vencimento) e receba também a data atual,
por fim, verifique se o produto alimentício ainda pode ser
consumido na data atual informada. (As datas devem ser
armazenadas em uma struct).*/

	struct data{
		int dia;
		int mes;
		int ano;
	};
	
    struct produto{
    	char nome[50];
    	int lote;
    	float valor;
    	struct data fabricacao;
    	struct data validade;
	};

int main(){
		struct data data_atual;
		struct produto alimento;
		
		printf("Digite a data de hoje: \n");
		scanf("%d / %d/ %d",&data_atual.dia,&data_atual.mes,&data_atual.ano);
		
		printf("Digite o nome do alimento: \n");
		scanf("%s",&alimento.nome);
		printf("Digite o lote do alimento: \n");
		scanf("%d",&alimento.lote);
		printf("Digite o valor do alimento: \n");
		scanf("%f",&alimento.valor);
		printf("Digite a data de fabricação do alimento:(dia-mes-ano) \n");
		scanf("%d/%d/%d",&alimento.fabricacao.dia,&alimento.fabricacao.mes,&alimento.fabricacao.ano);
		printf("Digite a data de validade do alimento:(dia-mes-ano) \n");
		scanf("%d/%d/%d",&alimento.validade.dia,&alimento.validade.mes,&alimento.validade.ano);
		
		printf("/n");
		if(alimento.validade.ano>data_atual.ano){
			printf("O produto ainda pode ser consumido. \n");
		}
		else if(alimento.validade.ano==data_atual.ano && alimento.validade.mes>data_atual.mes){
			printf("O produto ainda pode ser consumido. \n");
		}
		else if(alimento.validade.ano==data_atual.ano && alimento.validade.mes==data_atual.mes && alimento.fabricacao.dia>data_atual.dia){
			printf("O produto ainda pode ser consumido. \n");
		}
		else if(alimento.validade.ano==data_atual.ano && alimento.validade.mes==data_atual.mes && alimento.fabricacao.dia==data_atual.dia){
			printf("O produto ainda deve ser consumido ainda hoje. \n");
		}
		else{
			printf("O produto não pode ser consumido. \n");
		}
		

    
    return 0;
}