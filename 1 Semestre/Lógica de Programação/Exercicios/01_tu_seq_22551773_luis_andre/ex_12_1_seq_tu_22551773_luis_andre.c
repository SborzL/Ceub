#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
float a,b,x,y;
printf("\n Digite o valor de A:");
scanf("%f",&a);
printf("\n Digite o valor de B:");
scanf("%f",&b);

x = a + b;
y = a - b;

printf("\n A soma é: %f \n A subtração é: %f ",x,y);

}
