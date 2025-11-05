#include <stdio.h>
#include <locale.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
char v[5]={'a','b','c'};
char v1[5]={"abc"};
int i;
for(i=0;i<5;i++)
	printf("\n%d",v[i]);
for(i=0;i<5;i++)
	printf("\n%d",v1[i]);
}
