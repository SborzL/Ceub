#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int n=0;
printf("Todos os Números Primos\n");
while (n<=1000)
	{
	if (n%n ==0)
		{	
		printf("%d/n",n);
		
		}
	n++;
	}
printf("\n Final do Programa");
}
