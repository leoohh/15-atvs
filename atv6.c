#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale (LC_ALL,"portuguese");
int produto;

printf ("Codigo dos produtos:\n 1-Camiseta \n 2-Calça \n 3-Sapato\n");
scanf ("%d", &produto);

system ("cls");

switch (produto)
{
case 1:
   printf ("Camiseta - R$ 90,00");
    break;

case 2:
printf ("Calça - R$ 180,00");
    break;

    case 3:
    printf ("Sapato - R$ 250,00");
    break;

    default:
    printf ("Produto não valido:");
    break;
}





}





