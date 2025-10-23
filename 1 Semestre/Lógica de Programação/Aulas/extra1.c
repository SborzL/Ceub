#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main(void)
{
setlocale(LC_ALL,"Portuguese");
int n,,r=0;
printf("Digite um número: ");
scanf("%d",&n);
while (n>0)
	{
	r+= n%10;
	n=n/10;
	}
printf("\nO resultado da multiplicação é %d",r);
}
