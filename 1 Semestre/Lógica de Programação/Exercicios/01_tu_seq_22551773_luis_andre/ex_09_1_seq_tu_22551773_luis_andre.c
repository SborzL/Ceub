#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
float volume,R,PI = 3.141592653589793;
printf("\n Digite o Raio do Círculo:");
scanf("%f",&R);
volume = (4.0/3.0) *  PI * R * R * R;
printf("\n A esfera de raio %f tem o volume de: %f",R,volume);

}
