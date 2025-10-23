#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main(void)
{
setlocale(LC_ALL,"Portuguese");
int n,s;
for (n=-1;n<=100;n++)
	s+=n;
printf("\nA soma dos números de 1 a 100 é: %d",s);
}
