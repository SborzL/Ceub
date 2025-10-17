#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
float c,f;
printf("\n Digite o Fahrenheit:");
scanf("%f",&f);
c=(f-32 )/1.8;
printf("\n O grau em Celsius é: %.2f C°",c);

}
