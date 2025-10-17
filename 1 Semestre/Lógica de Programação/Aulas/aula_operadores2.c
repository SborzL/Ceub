#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
void main(void)
{
	setlocale(LC_ALL, "pt_BR");
	int a,b;
	char c;
	b=10;
	a=--b;
	printf("valor de a:%d\n valor de b:%d\n",a,b);
	
	a=0xabcd;
	b=0xffff;
	printf("\n a operação de %X & %X = %X",a,b,a&b);
	printf("\n a operação de %X ^ %X = %X",a,b,a^b);
	printf("\n a operação de %X | %X = %X",a,b,a|b);
	printf("\n o tamanho da variavel \"a\" em bytes e %d",sizeof(a));
	printf("\n o tamanho da variavel \"a\" em bytes e %d",sizeof(c));
}
