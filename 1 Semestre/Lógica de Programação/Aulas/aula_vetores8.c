#include <stdio.h>
#include <locale.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int i,c=0;
char vet[100]={"ceub"};
printf("\n Digite o seu nome: ");
gets(vet);
for (;vet[i]!='\0';i++)
if (vet[i]>=97)
	{
	vet[i]-=32;
	c++;
	}
printf("\nO vetor em maiúsculo é %s\nForam convertidas %d letras",vet,c);
}
