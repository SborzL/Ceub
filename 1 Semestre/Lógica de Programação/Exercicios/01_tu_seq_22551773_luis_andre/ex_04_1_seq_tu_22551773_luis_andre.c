#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
float nota1,nota2,media;
printf("\n Digite a primeira nota:");
scanf("%f",&nota1);
printf("\n Digite a segunda nota:");
scanf("%f",&nota2);
media=(nota1+nota2)/2;
printf("\n A m�dia do aluno �: %.2f", media);
}
