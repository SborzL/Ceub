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
	printf("\nVoc� n�o tem idade para entrar em nenhuma categoria.");
else if (idade<=10)
	printf("\nVoc� tem %d anos, voc� est� na categoria Infantil.",idade);
else if (idade<=17)
	printf("\nVoc� tem %d anos, voc� est� na categoria Juvenil.",idade);
else if (idade<=40)
	printf("\nVoc� tem %d anos, voc� est� na categoria Adulto.",idade);
else if (idade>40)
	printf("\nVoc� tem %d anos, voc� est� na categoria Veterano.",idade);
}
