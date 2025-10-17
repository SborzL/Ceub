#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
int n1,n2,soma,sub,mult;
printf("\n Digite o primeiro número:");
 scanf("%d",&n1);
 printf("\n Digite o segundo número:");
 scanf("%d",&n2);
 soma=n1+n2;
 printf("\n A soma dos valores é: %d",soma);
 sub=n1-n2;
 printf("\n A subtração dos valores é: %d",sub);
 mult=n1*n2;
 printf("\n A multiplicação dos valores é: %d",mult);
 
}

