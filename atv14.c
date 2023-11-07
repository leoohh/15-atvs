#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {

float soma = 0;
float media = 0;
int par = 0;
int impar = 0;   
int numero; 
int contador = 0;

setlocale (LC_ALL, "portuguese");

do
{
    printf ("Digite um numero:");
    scanf ("%d", &numero);
    soma += numero;
    contador++;

    if (numero % 2 == 0)
    {
        par++;
    }
    if (numero % 2 != 0)
    {
        impar++;
    }
    
    

} while (numero >= 0);

    media = soma / contador;

printf ("Soma:%.1f\n", soma);
printf ("Media:%.1f\n", media);
printf ("Quantidade de numeros pares:%d\n", par);
printf ("Quantidade de numeros impares:%d\n", impar);

return 0;

}
