#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale (LC_ALL,"portuguese");

int pnum;
int snum;
int maior;
int menor;

printf ("Digite o primeiro numero:");
scanf ("%d", &pnum);

printf ("Digite a segunda nota:");
scanf ("%d", &snum);

if (pnum > snum) {
    maior = pnum;
    menor = snum;
}

if (pnum < snum) {
    maior = snum;
    menor = pnum;
}

system ("cls");

printf ("O maior n�mero �:%d \n", maior);
printf ("O menor n�mero �:%d", menor);


return 0;



}