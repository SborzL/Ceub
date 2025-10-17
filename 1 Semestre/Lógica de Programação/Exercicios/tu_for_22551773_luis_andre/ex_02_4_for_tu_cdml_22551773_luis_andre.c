#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 int f;
    float c;
    printf("Fahrenheit\tCelsius\n");
    for (f = -50; f <= 50; f++) {
        c = (5.0 / 9.0) * (f - 32);
        printf("%d\t\t%.2f\n", f, c);
    }
}
