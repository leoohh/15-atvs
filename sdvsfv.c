#include <stdlib.h>
#include <stdio.h>


int main () {

int i;
int numero [4];
int soma = 0;
float media;

for ( i = 0; i < 4; i++)
{
    printf ("Digite sua %d° nota:", i + 1);
    scanf ("%d", &numero[i]);
    soma += numero[i];
}
media = soma / i;

for ( i = 0; i < 4; i++)
{
   printf ("%d° numero: %d\n", i + 1,numero[i]);
}


if (media >= 7)
{
    printf ("aprovado");

}
if (media >= 5 && media <= 6.9)
{
     printf ("recuperacao");
}
if (media < 5)
{
     printf ("reprovado");
}
printf ("media:%2.f", media);



return 0;



}