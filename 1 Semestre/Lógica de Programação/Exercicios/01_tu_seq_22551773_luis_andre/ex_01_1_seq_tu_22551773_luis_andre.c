#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 float n1,n2,soma;
 printf("\n Digite o primeiro n�mero:");
 scanf("%f",&n1);
 printf("\n Digite o segundo n�mero:");
 scanf("%f",&n2);
 soma=n1+n2;
 printf("\n A soma dos valores �: %.2f",soma);

}

