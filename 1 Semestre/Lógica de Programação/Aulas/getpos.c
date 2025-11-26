#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void main(void)
{
int d;
int getpos(char d);
puts("DIGITE QUALQUER LETRA DO ALFABETO");
d=getche();
d=getpos(d);	
printf("\nO CARACTER ESTA NA POSICAO (%d) DO ALFABETO\n",d);
}

int getpos(char c)
{
if(c<0x61)
	c=tolower(c);
return(26-('z'-c));
}
