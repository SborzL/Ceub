#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
int n1,n2,soma,sub,mult;
printf("\n Digite o primeiro n�mero:");
 scanf("%d",&n1);
 printf("\n Digite o segundo n�mero:");
 scanf("%d",&n2);
 soma=n1+n2;
 printf("\n A soma dos valores �: %d",soma);
 sub=n1-n2;
 printf("\n A subtra��o dos valores �: %d",sub);
 mult=n1*n2;
 printf("\n A multiplica��o dos valores �: %d",mult);
 
}

