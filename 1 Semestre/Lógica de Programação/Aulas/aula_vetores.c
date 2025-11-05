#include <stdio.h>
#include <locale.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int i,quad [10];
for(i=0;i<10;i++)
	quad[i]=i*i;
for(i=0;i<10;i++)
	printf("\nO quadrado de %d = %d",i,quad[i]);	

}
