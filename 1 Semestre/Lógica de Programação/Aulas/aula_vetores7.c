#include <stdio.h>
#include <locale.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int i;
char vet[]={"ceub"};
for(i=0;vet[i]!='\0';i++)
	vet[i]-=32;
printf("\nO vetor em maiúsculo é %s",vet);
}
