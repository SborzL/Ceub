#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
float area,altura,raio,PI = 3.141592653589793;
printf("\n Digite o raio do cilindro:");
scanf("%f",&raio);
printf("\n Digite a altura do cilindro:");
scanf("%f",&altura);
area = 2 * PI * raio * altura;
printf("\n A área lateral do cilindro é: %f",area);
}
