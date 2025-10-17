#include <stdio.h>
void main(void)
{ 
char nome;
float altura;
int idade;
float peso;
printf("\n Digite seu nome: ");
scanf("%s",&nome);
printf("\n Digite sua altura: ");
scanf("%f",&altura);
printf("\n Digite seu peso: ");
scanf("%f",&peso);
printf("\n Digite sua idade: ");
scanf("%d",&idade);
printf("\n os valores fornecidos foram:\nnome: %s \nidade: %d \npeso: %.2f \naltura: %.2f",nome,idade,peso,altura);
}
