#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 float n,s=0,m;
 int a=4,a1,q=1;
 printf("\n Programa para calcular a media aritmética da turma\n");
 a1=a;
while(a>0)
	{	
	printf("\n Digite a nota do aluno %d: ",q);
	scanf("%f",&n);
	q++;
	s=s+n;
	a--;
	}
	m=s/a1;
	printf("\n A média das notas da turma foi: %.2f",m); 
}

