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
	printf("\n N�mero Positivo");
	printf("\n O n�mero digitado foi: %d",n);
	printf("\n O dobro do valor �: %d",d);
	}
	else
		if (n<0)
		{
		t = n*3;
		printf("\n N�mero Negativo");
		printf("\n O n�mero digitado foi: %d",n);
		printf("\n o triplo do valor �: %d",t);
		}
		else
		{
		printf("\n N�mero Nulo");
		printf("\n O n�mero digitado foi: %d",n);
		}
}

