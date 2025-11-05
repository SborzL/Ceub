#include <stdio.h>
#include <locale.h>
void main(void)
{
setlocale(LC_ALL, "Portuguese");
int i,vet [0]={0};
for(i=0;i<40;printf("\n%d",vet[i]),i++);	
}
