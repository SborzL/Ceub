#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int v;
	printf("\n Digite o valor: ");
	scanf("%d",&v);
	if(v>=100)
	printf("\n O valor %d é maior ou igual a cem",v);
	else
	printf("\n O valor %d é menor que cem.",v);
}

