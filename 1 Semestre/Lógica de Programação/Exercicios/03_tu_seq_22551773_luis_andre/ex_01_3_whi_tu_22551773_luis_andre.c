#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define FLOAT "%f"
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int qtd_nr, cont=0;
float media=0.0,n;
printf("\n Digite a quantidade de n�meros: ");
scanf("%d",&qtd_nr);
cont=qtd_nr;
while (cont>0)
{
	printf("\n Digite um n�mero: ");
	scanf(FLOAT,&n);
	media +=n;
	cont--;
}
media=media/(float)qtd_nr;
printf("\n A m�dia dos n�meros � %f",media);
}

