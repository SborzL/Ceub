#include <stdio.h>
#include <conio.h>
#include <locale.h>
void main(void)
{
setlocale (LC_ALL,"Portuguese");	
int a,b,c;
int soma(int x,int y);
printf("\nDigite o primeiro número a ser somado: ");
scanf("%d",&a);
printf("\nDigite o segundo número a ser somado: ");
scanf("%d",&b);
c=soma(a,b);
printf("\nO resultado da soma de %d com %d é %d",a,b,c);
}

int soma (int x,int y)
{
int result;
result=x+y;
return(result);	
}
