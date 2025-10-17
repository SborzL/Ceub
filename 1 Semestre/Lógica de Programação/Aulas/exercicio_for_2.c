#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	for (i=100;i>=0;i--)
 		{
 		if((i%2)==1 && (i%3)==0)	
		printf("\n%d",i);
		}
	printf("\nFIM");
}
