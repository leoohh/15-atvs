#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale (LC_ALL,"portuguese");

int pnumero;
int snumero;
char ope;

printf ("Digite o primero n�mero:");
scanf ("%d", &pnumero);

printf (" D�gite o segundo n�mero:");
scanf("%d", &snumero);
fflush(stdin);

printf("Digite o simbolo da opera��o desejada:");
scanf ("%c", &ope);

switch (ope)
{
case '+' :
printf ("Soma:%d", pnumero + snumero);

    break;

case '-':
printf ("Subtr��o:%d", pnumero - snumero);
    break;
}

}