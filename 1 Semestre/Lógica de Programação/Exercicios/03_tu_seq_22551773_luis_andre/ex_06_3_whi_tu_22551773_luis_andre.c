#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int n, v = 0;
    do {
        printf("\nDigite um número: ");
        scanf("%d",&n);
        if (n>=0)
            v = v + n;
		}
	while (n>=0);
	printf("\nA soma dos valores é %d",v);
	
}


