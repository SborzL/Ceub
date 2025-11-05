#include <stdio.h>
#include <locale.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int i,quad [10]={1,2,3,4,5,6,7,8,9,10};
for(i=0;i<10;i++)
	printf("\nO valor armazenado no elemento de índice %d é %d",i,quad[i]);	
}
