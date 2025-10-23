#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main(void)
{
setlocale(LC_ALL,"Portuguese");
float v,r;
printf("\nDigite o valor do raio do hemisfério em metros: ");
scanf("%f",&r);
v = 2.0/3.0*3.141516*(r*r*r);
printf("\nO volume do hemisfério é %.2f em metros cúbicos.",v);
}
