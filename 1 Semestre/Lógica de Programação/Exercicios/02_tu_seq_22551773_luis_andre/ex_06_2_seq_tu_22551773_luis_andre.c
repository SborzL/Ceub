#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	float c,v,r;
	printf("\n Digite o valor de compra: ");
	scanf("%f",&c);
	printf("\n Digite o valor de venda: ");
	scanf("%f",&v);
	r=v-c;
	if(r>0)
	printf("\n Teve lucro.");
	else if(r==0)
	printf("\n Os valores s�o iguais.");
	else
	printf("\n Teve preju�zo.");
	printf("\n O pre�o de compra foi: R$ %.2f e o pre�o de venda foi: R$ %.2f ",c,v);
}

