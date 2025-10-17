#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	float a,r;
	char s;
	printf("\n m - Masculino \n f - Feminino");
	printf("\n Digite o sexo: ");
	scanf("%c",&s);
	if(s=='m')
		{
		printf("\n Digite a Altura: ");
		scanf("%f",&a);	
		r = (72.7 * a) - 58;	
		printf("\n Peso ideal: %.2f Kg",r);
		}
	else if(s=='f')
	{
	printf("\n Digite a Altura: ");
	scanf("%f",&a);	
	r = (62.1 * a) - 44.7;
	printf("\n Peso ideal: %.2f Kg",r);
	}
	else
	printf("\n Erro o sexo informado não existe.");
}

