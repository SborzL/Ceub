#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int n,d,t;
	printf("\n Digite o valor: ");
	scanf("%d",&n);
	
	if (n>0)
	{
	d = n*2;
	printf("\n Número Positivo");
	printf("\n O número digitado foi: %d",n);
	printf("\n O dobro do valor é: %d",d);
	}
	else
		if (n<0)
		{
		t = n*3;
		printf("\n Número Negativo");
		printf("\n O número digitado foi: %d",n);
		printf("\n o triplo do valor é: %d",t);
		}
		else
		{
		printf("\n Número Nulo");
		printf("\n O número digitado foi: %d",n);
		}
}

