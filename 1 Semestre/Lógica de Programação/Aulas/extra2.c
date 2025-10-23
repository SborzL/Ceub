#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main(void)
{
setlocale(LC_ALL,"Portuguese");
int n=1,r,q=-1;
float m;
printf("\nAo digitar 0 o programa calcula.\n");
while (n!=0)
	{
	printf("\nDigite o  número: ");
	scanf("%d",&n);
	r=r+n;
	q++;
	}
	m=r/q;
printf("\nO resultado da soma é %d.\n\nVocê digitou %d números.\n\nA média aritimética dos números é %.2f.",r,q,m);
}
