#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 float nota, soma = 0, media;
 int i;
	for(i = 1; i <= 4; i++) {
        printf("\nDigite a nota do aluno n�mero %d: ", i);
        scanf("%f", &nota);
        soma = soma + nota;
    }
    media = soma / 4;
    printf("\nM�dia da turma: %.2f", media);
}
