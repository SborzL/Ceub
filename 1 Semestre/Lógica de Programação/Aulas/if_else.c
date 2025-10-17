#include <stdio.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int valor;
	printf("\n Digite um valor: ");
	scanf("%d",&valor);
	
	if (valor >0)
	{
		printf("\n O número %d é maior que 0",valor);
		printf("\n O número em hexadecimal é %X",valor);
	}
	else
		printf("\n O número %d é menor que 0",valor);	
}
