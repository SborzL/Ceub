#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("\n Digite o n�mero: ");
	scanf("%d",&n);
	if((n%2)==0)
	printf("\n O n�mero informado � par.");
	else
	printf("\n O n�mero informado � impar.");
}

