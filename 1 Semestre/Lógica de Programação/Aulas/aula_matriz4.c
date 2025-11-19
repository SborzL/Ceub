#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
setlocale (LC_ALL,"Portuguese");
int i,c;
char mencoes[5][2][3]={{"MM","SS"},{"MM","SS"},{"MM","SS"},{"MM","SS"},{"MM","SS"}};
char aux[10];
for (i=0;i<5;i++)
	{printf("\nAluno %d \nMenção 1: %s \nMenção 2: %s",i+1,mencoes[i][0],mencoes[i][1]);}
}
