#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
float comprimento,raio,PI = 3.141592653589793;
printf("\n Digite o Raio do C�rculo:");
scanf("%f",&raio);
comprimento = 2 * PI * raio;
printf("\n O comprimento do c�rculo �: %f",comprimento);5

}
