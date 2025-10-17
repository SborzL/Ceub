#include <stdio.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	float a,b,media;
	printf("\n Digite a 1° nota: ");
	scanf("%f",&a);
	printf("\n Digite a 2° nota: ");
	scanf("%f",&b);
	media = (a+b)/2;
	if (media>=7)
		printf("\n Você está aprovado");
	else
		printf("\n Você está reprovado");
}
