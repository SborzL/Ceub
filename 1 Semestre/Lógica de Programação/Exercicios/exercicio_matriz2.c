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
for (c=0;c<4;c++)
	for (l=0;l<3;l++)
	{
		printf("\nDigite o valor da linha %d coluna %d: ",l+1,c+1);
		num[l][c]=atoi(gets(aux));
	}
for (c=0;c<4;c++)
	for (l=0;l<3;l++)
		printf("\nO valor armazenado na linha %d coluna %d é: %d",l+1,c+1,num[l][c]);
}
