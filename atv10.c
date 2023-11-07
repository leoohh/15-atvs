#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale (LC_ALL,"portuguese");

int pnumero;
int snumero;
char ope;

printf ("Digite o primero número:");
scanf ("%d", &pnumero);

printf (" Dígite o segundo número:");
scanf("%d", &snumero);
fflush(stdin);

printf("Digite o simbolo da operação desejada:");
scanf ("%c", &ope);

switch (ope)
{
case '+' :
printf ("Soma:%d", pnumero + snumero);

    break;

case '-':
printf ("Subtrção:%d", pnumero - snumero);
    break;
}

}