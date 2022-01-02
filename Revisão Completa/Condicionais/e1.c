#include <stdio.h>
#include <stdlib.h>



int main() {
	int categoria;
	float preco;
	int condicao;
	printf("Digite o número da categoria:");
	scanf("%d",&categoria);
	switch(categoria){
	case 1:{
		preco=10;
		condicao=1;
		break;
	}
	case 2:{
		preco=20;
		condicao=1;
		break;
	}
	default:{
		printf("Inexistente");
		condicao=0;
		break;
	}
	}
	if(condicao==1){
		printf("O valor é %2.f",preco);
	}
	
	return 0;
}