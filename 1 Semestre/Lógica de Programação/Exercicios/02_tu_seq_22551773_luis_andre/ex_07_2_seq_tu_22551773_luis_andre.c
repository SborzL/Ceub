#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	float n1,n2,p1,p2,m;
	printf("\n Digite a 1° nota: ");
	scanf("%f",&n1);
	printf("\n Digite o peso da 1° nota: ");
	scanf("%f",&p1);
	printf("\n Digite a 2° nota: ");
	scanf("%f",&n2);
	printf("\n Digite o peso da 2° nota: ");
	scanf("%f",&p2);
	
	m = (n1 * p1 + n2 * p2) / (p1 + p2);
	if (m>=5)
		printf("\n Média do aluno: %.2f - Você está aprovado",m);
	else
		printf("\n Média do aluno: %.2f - Você está reprovado",m);
}
