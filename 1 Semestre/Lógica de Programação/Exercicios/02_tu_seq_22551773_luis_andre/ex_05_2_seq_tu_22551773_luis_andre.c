#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("\n Digite o número: ");
	scanf("%d",&n);
	if((n%2)==0)
	printf("\n O número informado é par.");
	else
	printf("\n O número informado é impar.");
}

