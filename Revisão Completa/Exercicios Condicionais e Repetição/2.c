#include <stdio.h>

int main(){
	int a,b,c,maior,menor;
	printf("Digite um número:");
	scanf("%d",&a);
	printf("Digite um número:");
	scanf("%d",&b);
	printf("Digite um número:");
	scanf("%d",&c);
	if((a>b)&&(a>c)){
		maior=a;
	}
	else if((b>a)&&(b>c)){
		maior=b;
	}
	else if((c>a)&&(c>b)){
		maior=c;
	}
	printf("O maior num é : %d \n",maior);
	if((a<b)&&(a<c)){
		menor=a;
	}
	else if((b<a)&&(b<c)){
		menor=b;
	}
	else if((c<a)&&(c<b)){
		menor=c;
	}
	
	printf("O menor num é : %d",menor);
	return 0;
}