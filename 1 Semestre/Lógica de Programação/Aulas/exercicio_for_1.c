#include <stdio.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int i,n;
	//entrar com o dado, Limite superior do la�o for
	printf("\nEntre com o n�mero: ");
	scanf("%d",&n);
	
	for (printf("\n			       		 Dec,  Oct,  Hex"),i=1;i<=n;i++)
	{
		if((i%7)==0)	
			printf("\nn�mero divis�vel por 7 ----------> 	%4d,  %4o,  %0X",i,i,i);
	}
	printf("\nFIM");
}
