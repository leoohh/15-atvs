#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale (LC_ALL,"portuguese");

float nota;
float media;

printf ("Digite sua nota:");
scanf ("%f", &nota);

if (nota >= 9 ) {
    printf ("Nota Excelente");
}
if (nota <= 8.9 && nota >= 7 ) {
    printf ("Bom");
}
if (nota >= 5 && nota <= 6.9)
{
    printf ("Razoavel");
}
if (nota < 5){
    printf ("Insuficiente");
}

return 0;

}