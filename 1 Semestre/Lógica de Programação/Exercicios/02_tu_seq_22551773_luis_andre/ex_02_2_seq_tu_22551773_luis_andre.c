#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int v1,v2;
	printf("\n Digite o primeiro valor: ");
	scanf("%d",&v1);
	printf("\n Digite o segundo valor: ");
	scanf("%d",&v2);
	
	if (v1>v2)
	{
	printf("\n O maior valor é %d",v1);
	printf("\n Na ordem crescente: %d,%d ",v2,v1);
	}
	else
		if (v2>v1)
		{
		
		printf("\n O maior valor é %d",v2);
		printf("\n Na ordem crescente: %d,%d ",v1,v2);
		}
		else
		{
		printf("\n Os valores são iguais.");
		printf("\n O valor digitado foi: %d",v1);
		}
}

