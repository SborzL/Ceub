#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 int n, i;
    float soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (i = n; i >= 0; i--) {
        soma += i;}
    printf("Media = %.2f\n", soma / (n + 1));
}
