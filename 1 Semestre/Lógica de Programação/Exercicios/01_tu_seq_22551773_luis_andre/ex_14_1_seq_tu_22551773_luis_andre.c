#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
float a,b,c,media;
printf("\n Digite o valor de A:");
scanf("%f",&a);
printf("\n Digite o valor de B:");
scanf("%f",&b);
printf("\n Digite o valor de C:");
scanf("%f",&c);

media = (a + b + c) /3;

printf("\n A media aritmética dos valores é: %f",media);


}
