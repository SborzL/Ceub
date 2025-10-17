#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int n,m,r;
	for (n=1;n<=10;n++)
		for (printf("\n\nTabuada do %d",n),m=1;m<=10;printf("\n%d x %d = %d",n,m,n*m),m++);
}
