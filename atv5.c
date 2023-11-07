#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale (LC_ALL,"portuguese");
int ind;

printf ("Qual o idioma desejado?\n 1-Inglês \n 2-Espanhol \n 3-Francês\n");
scanf ("%d", &ind);

system ("cls");

switch (ind)
{
case 1:
   printf ("Welcome");
    break;

case 2:
printf ("Bienvenido");
    break;

    case 3:
    printf ("Bienvenue");
    break;

    default:
    printf ("Idioma não valido:");
    break;
}





}