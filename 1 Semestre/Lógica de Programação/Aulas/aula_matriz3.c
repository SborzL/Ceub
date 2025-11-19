#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
setlocale (LC_ALL,"Portuguese");
int l,c;
char nomes_alunos[4][10];
for (l=0;l<4;l++)
	{ printf("\nDigite o nome do aluno %d: ",l+1);		
	  gets(nomes_alunos[l]);
	}
	for(l=0;l<4;l++)
		printf("\nO nome do aluno %d é %s",l+1,nomes_alunos[l]);
}
