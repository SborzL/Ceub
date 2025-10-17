#include <stdio.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("\n Digite a idade: ");
	scanf("%d",&idade);
	if(idade>=0 && idade<=2)
		printf("\n Bebê");
	if(idade>=3 && idade<=11)
		printf("\n Infantil");
	if(idade>=12 && idade<=17)
		printf("\n Adolescente");
	if(idade>=18)
		printf("\n Adulto");	
}	
