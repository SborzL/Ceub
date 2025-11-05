#include <stdio.h>
#include <locale.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
char v[]={'a','b','c'};
char v1[]={"abc"};
printf("\n%d  %d",sizeof(v),sizeof(v1));
//o v1["abc"] tem o valor 4 pois no final de uma string contem o valor 0.
}
