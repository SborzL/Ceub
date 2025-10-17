#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
float area,raio,PI = 3.141592653589793;
printf("\n Digite o Raio do Círculo:");
scanf("%f",&raio);
area = PI * raio * raio;
printf("\n A área do círculo é: %f",area);

}
