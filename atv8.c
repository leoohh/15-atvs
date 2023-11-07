#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale (LC_ALL,"portuguese");

int num;
int i;

printf ("Digite o numero de partida para a contagem regressiva:");
scanf ("%d", &num);

for ( i = num; i >= 0; i--)
{
    printf ("%d \n", i);
}

return 0;

}