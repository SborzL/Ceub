#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main(void)
{
int idade;
setlocale(LC_ALL,"Portuguese");
printf("\nDigite sua idade: ");
scanf("%d",&idade);
if (idade<5)
	printf("\nVocê não tem idade para entrar em nenhuma categoria.");
else if (idade<=10)
	printf("\nVocê tem %d anos, você está na categoria Infantil.",idade);
else if (idade<=17)
	printf("\nVocê tem %d anos, você está na categoria Juvenil.",idade);
else if (idade<=40)
	printf("\nVocê tem %d anos, você está na categoria Adulto.",idade);
else if (idade>40)
	printf("\nVocê tem %d anos, você está na categoria Veterano.",idade);
}
