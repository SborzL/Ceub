#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
setlocale (LC_ALL,"Portuguese");
int l,c;
int num[3][4];
char aux[10];
for (l=0;l<3;l++)
	for (c=0;c<4;c++)
	{
		printf("\nDigite o valor da linha %d coluna %d: ",l+1,c+1);
		num[l][c]=atoi(gets(aux));
	}
for (l=0;l<3;l++)
	for (c=0;c<4;c++)
		printf("\nO valor armazenado na linha %d coluna %d é: %d",l+1,c+1,num[l][c]);
}
