#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int n,v=1;
printf("\nDigite um n�mero inteiro maior que 1: ");
scanf("%d",&n);
while (v<=n)	
	{
	printf("\n%d",v);
	v++;
	}
}
