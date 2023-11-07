#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale (LC_ALL,"portuguese");

float idade;


printf ("Digite sua idade:");
scanf ("%f", &idade);

if (idade >= 18 ) {
    printf ("Acesso permitido");
}
if (idade < 18 ) {
    printf ("Acesso negado");
}

return 0;
 }