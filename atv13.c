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

printf ("O maior número é:%d \n", maior);
printf ("O menor número é:%d", menor);


return 0;



}