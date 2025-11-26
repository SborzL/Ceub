#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(void)
{
setlocale (LC_ALL,"Portuguese");
int cont,contachar(char vet[]);
char aux[10],nome[40];
printf("\nDigite um nome: ");
gets(nome);
cont=contachar(nome);	
printf("\nO vetor possui %d caracteres",cont);
}

int contachar(char vet[])
{
int i=0;
for(i=0;vet[i]!=0;i++){
}
return(i);
}
