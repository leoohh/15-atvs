#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale (LC_ALL,"portuguese");

float media;
int numero;
int i;
int qnumero;
int soma;

printf ("Digite quantidade de notas que deseja inserir:");
scanf ("%d", &qnumero);

for ( i = 0; i < qnumero; i++)
{
    printf ("Digite a %d° nota:", i+1);
    scanf ("%d", &numero);
    soma += numero;
    media = soma / qnumero;
}

printf ("Média:%.1f", media);




return 0;

}