#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int v1=1,v2=10;
while (v1<=10)
	{
	printf("\n%d",v1);
 	v1++;
	}
while (v2>=0)
	{
 	printf("\n%d",v2);
 	v2--;
	}
}
