#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 int n;
 printf("\n Entre com o valor de n: ");
 scanf ("%d", &n);
 while(n>=0)
{ if ((n%2) ==0)
{ printf("%d\n", n); }
n--;
}

}
