#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void) 
{
setlocale(LC_ALL, "Portuguese");
    int n, i=1;
    printf("\nDigite um numero para ver a tabuada: ");
    scanf("%d",&n);
    while (i<=10) 
    	{
        printf("\n%d x %d = %d",n,i,n*i);
        i++;
    	}
}
