#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 int n=0,s=0,q=0;
while(n!=-1)
	{
	q++;	
	printf("\n Digite um n�mero: ");
	scanf("%d",&n);
	if (n!=-1)
	s=s+n;
	}
	q--;
	printf("\n A qauntidade de n�meros informados foi: %d",q);
	printf("\n A soma dos n�meros informados foi: %d",s); 
}

