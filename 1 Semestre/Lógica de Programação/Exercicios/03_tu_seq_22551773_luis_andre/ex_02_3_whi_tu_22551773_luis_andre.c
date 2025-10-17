#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 float f=32,c;
 printf("\n             CONVERSAO FAHREINHEIT – CELSIUS");
 printf("\n  CELSIUS                                      FAHRENHEIT");
while(f<53)
	{
	c=(5.0/9.0)*(f-32.0);	
	printf("\n  %-10.2f                                   %-10.2f",c,f);
	f++;
	} 
}

