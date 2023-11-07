#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale (LC_ALL,"portuguese");
int menu;

printf ("-----Menu-----\n 1-Novo jogo \n 2-Carregar jogo \n 3-Configurações\n");
scanf ("%d", &menu);

system ("cls");

switch (menu)
{
case 1:
   printf ("Carregando novo jogo...");
    break;

case 2:
printf ("Carregando jogo salvo...");
    break;

    case 3:
    printf ("---Configurações--- \n Audio \n Video \n Sensibilidade");
    break;

    default:
    printf ("Função não válida:");
    break;
}





}
