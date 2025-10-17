#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int ano_nasc,ano_atual,idade;
	printf("\n Digite o ano atual: ");
	scanf("%d",&ano_atual);
	printf("\n Digite o ano do seu nascimento: ");
	scanf("%d",&ano_nasc);
	idade = ano_atual - ano_nasc;
	if (idade>=16)
	printf("\n A idade é %d anos e já pode votar",idade);
	else
	printf("\n A idade é %d anos e não pode votar",idade);
	printf("\n  O ano de nascimento é %d",ano_nasc);
}

