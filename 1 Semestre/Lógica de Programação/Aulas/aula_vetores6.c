#include <stdio.h>
#include <locale.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int i;
char vet[]={"ceub"};
i = strlen(vet);
printf("\nO tamanho do vetor vet é %d",strlen(vet));
}
