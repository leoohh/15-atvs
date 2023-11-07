#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale (LC_ALL,"portuguese");

int codigoc = 1235;
int codigo;

do
{
    printf ("Digite o codigo de acesso:");
    scanf ("%d", &codigo);
    system ("cls");
} while (codigo != codigoc);

printf ("Bem vindo");

return 0;


}