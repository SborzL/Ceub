#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
float p,m;
printf("\n Digite o valor em p�s:");
scanf("%f",&p);

m = p * 0.3048;

printf("\n %f em p�s s�o %.3f metros",p,m);

}
