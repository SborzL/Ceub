#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	float a,b,c,delta,x1,x2;
	printf("Equa��o do 2� grau: ax� + bx + c = 0\n");
	printf("\n Digite o valor de a: ");
    scanf("%f",&a);
    printf("Digite o valor de b: ");
    scanf("%f",&b);
    printf("Digite o valor de c: ");
    scanf("%f",&c);
    delta = pow(b,2) - 4 * a * c;
	if (delta < 0)
        printf("N�o existem ra�zes reais.\n");
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("Existem duas ra�zes reais iguais.\n");
        printf("x1 = x2 = %.2f\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Existem duas ra�zes reais diferentes.\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
}
