#include <stdio.h>
#include <locale.h>
void main(void)
{
setlocale (LC_ALL,"Portuguese");
int cont,tomai(char vet[]);
char aux[10],nome[40];
printf("\nDigite um nome: ");
gets(nome);
cont=tomai(nome);	
printf("\nForam realizadas %d conversões de caracteres de minúsculo para maiúsculo",cont);
printf("\nO nome em maiúsculas é %s",nome);
}

int tomai(char vet[])
{
int i=0,cont=0;
for(i=0;vet[i]!=0;i++)
	if(vet[i]>96)
		{
		vet[i]-=32;
		cont++;
		}
return(cont);
}
