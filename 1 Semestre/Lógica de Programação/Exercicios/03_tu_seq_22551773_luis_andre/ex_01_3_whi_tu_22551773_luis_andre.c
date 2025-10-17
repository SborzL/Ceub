#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define FLOAT "%f"
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int qtd_nr, cont=0;
float media=0.0,n;
printf("\n Digite a quantidade de números: ");
scanf("%d",&qtd_nr);
cont=qtd_nr;
while (cont>0)
{
	printf("\n Digite um número: ");
	scanf(FLOAT,&n);
	media +=n;
	cont--;
}
media=media/(float)qtd_nr;
printf("\n A média dos números é %f",media);
}

