#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
float area,raio,PI = 3.141592653589793;
printf("\n Digite o Raio do C�rculo:");
scanf("%f",&raio);
area = PI * raio * raio;
printf("\n A �rea do c�rculo �: %f",area);

}
