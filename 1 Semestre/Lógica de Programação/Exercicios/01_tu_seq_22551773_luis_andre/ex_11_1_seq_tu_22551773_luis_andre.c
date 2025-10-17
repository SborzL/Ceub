#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
int a,b,x;
printf("\n Digite o valor de A:");
scanf("%d",&a);
printf("\n Digite o valor de B:");
scanf("%d",&b);

x = a;
a = b;
b = x;

printf("\n O valor de A é: %d \n O valor de B é: %d",a,b);

}
