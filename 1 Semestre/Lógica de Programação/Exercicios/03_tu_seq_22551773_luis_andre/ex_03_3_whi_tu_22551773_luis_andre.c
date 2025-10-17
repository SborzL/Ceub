#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 float c,tfi,tff;
 printf("\n Programa para a Conversão Fahrenheit - Celsius\n");
 printf("\n Digite a temperatura fahrenheit inicial: ");
 scanf("%f",&tfi);
 printf("\n Digite a temperatura fahrenheit final: ");
 scanf("%f",&tff);
 printf("\n             CONVERSAO FAHREINHEIT – CELSIUS");
 printf("\n  CELSIUS                                      FAHRENHEIT");
while(tfi<=tff)
	{
	c=(5.0/9.0)*(tfi-32.0);	
	printf("\n  %-10.2f                                   %-10.2f",c,tfi);
	tfi++;
	} 
}

