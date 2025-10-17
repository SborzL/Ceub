#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 int n,i;
 printf("\n Entre com o valor de n: ");
 scanf ("%d", &n);
 i=n;
 while(i>=0)
{ if ((i%2) ==0)
{ printf("%d\n", i); }
i=i-1;
}

}
