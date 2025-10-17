#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
float comprimento,raio,PI = 3.141592653589793;
printf("\n Digite o Raio do Círculo:");
scanf("%f",&raio);
comprimento = 2 * PI * raio;
printf("\n O comprimento do círculo é: %f",comprimento);5

}
