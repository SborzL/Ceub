// 3. Construa um programa que efetue a leitura, a soma posicional e a impressão do resultado, entre duas matrizes inteiras que comportem 25 elementos.
// Use uma terceira matriz para armazenar o resultado.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
setlocale (LC_ALL,"Portuguese");
int l,c;
int num1[2][2];
int num2[2][2];
int soma[2][2];
char aux[10];
for (l=0;l<2;l++)
	for (c=0;c<2;c++)
	{
		printf("\nDigite o valor na matriz 1 da linha %d coluna %d: ",l+1,c+1);
		num1[l][c]=atoi(gets(aux));
for (l=0;l<5;l++)
	for (c=0;c<5;c++)
	{
		printf("\nDigite o valor na matriz 2 da linha %d coluna %d: ",l+1,c+1);
		num2[l][c]=atoi(gets(aux));		
	}
for (l=0;l<5;l++)
	for (c=0;c<5;c++)
		soma[l][c] = num1[l][c]+num2[l][c];
		printf("\nA soma da matrizes na linha %d coluna %d é: %d",l+1,c+1,soma[l][c]);
}
}
