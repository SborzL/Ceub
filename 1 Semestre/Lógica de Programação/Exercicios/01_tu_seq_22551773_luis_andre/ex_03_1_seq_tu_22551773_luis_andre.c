#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
float area,base,altura;
printf("\n Digite o valor da base:");
scanf("%f",&base);
printf("\n Digite o valor da altura:");
scanf("%f",&altura);
area=(base*altura)/2;
printf("\n O triângulo de base %.2f e altura %.2f tem a área de: %.3f",base,altura,area);

}
