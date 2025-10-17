#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 int n,i=0;
 printf("\n Entre com o valor de n:");
 scanf ("%d", &n);
while(i<=n)
	{
	if ((i%2) !=0)
		{
		printf("%d\n", i);
		}
	i++;
	}
}
