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
		printf("\n O n�mero %d � maior que 0",valor);
		printf("\n O n�mero em hexadecimal � %X",valor);
	}
	else
		printf("\n O n�mero %d � menor que 0",valor);	
}
