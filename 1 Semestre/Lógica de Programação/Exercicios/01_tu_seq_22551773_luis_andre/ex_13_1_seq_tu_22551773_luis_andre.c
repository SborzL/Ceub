#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
float p,m;
printf("\n Digite o valor em pés:");
scanf("%f",&p);

m = p * 0.3048;

printf("\n %f em pés são %.3f metros",p,m);

}
