#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int i;
char vet[40];
printf("\n Digite o seu nome: ");
gets(vet);
printf("\nO seu nome %s possui %d caracteres",vet,strlen(vet));
}
