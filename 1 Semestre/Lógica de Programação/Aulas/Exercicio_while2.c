#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int n=0;
printf("Somente n�meros divisiveis por 5\nN�mero     Quadrado   Cubo\n");
while (n<=100)
	{
	if (n%5 ==0)
		{	
		printf("%-10d %-10d %-10d \n",n,n*n,n*n*n);
		}
	n++;	
	}
printf("\n Final do Programa");
}
