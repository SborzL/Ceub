#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
float a,b,raiz;
printf("\n Digite o valor de A:");
scanf("%f",&a);
printf("\n Digite o valor de B:");
scanf("%f",&b);
raiz = -b/a;
printf("\n A raiz da equa��o %.2f x + %.2f �: %.2f ",a,b,raiz);

}
