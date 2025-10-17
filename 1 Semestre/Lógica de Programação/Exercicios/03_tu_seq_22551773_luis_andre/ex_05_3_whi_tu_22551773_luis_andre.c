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
	printf("\n Digite um número: ");
	scanf("%d",&n);
	if (n!=-1)
	s=s+n;
	}
	q--;
	printf("\n A qauntidade de números informados foi: %d",q);
	printf("\n A soma dos números informados foi: %d",s); 
}

