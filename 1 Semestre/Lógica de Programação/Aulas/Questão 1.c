#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main(void)
{
setlocale(LC_ALL,"Portuguese");
float v,r;
printf("\nDigite o valor do raio do hemisf�rio em metros: ");
scanf("%f",&r);
v = 2.0/3.0*3.141516*(r*r*r);
printf("\nO volume do hemisf�rio � %.2f em metros c�bicos.",v);
}
