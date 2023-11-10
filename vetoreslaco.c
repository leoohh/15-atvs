#include <stdlib.h>
#include <stdio.h>


int main () {

int numero [3];
int i;
int q = 3;
float media;

for ( i = 0; i < q; i++)
{
    printf ("Digite a %d° nota:", i + 1);
    scanf ("%d", &numero [i]);
    
}

for ( i = 0; i < q; i++)
{
   printf ("%d° numero: %d\n", i + 1,numero[i]);

}

media = (numero [0] + numero [1] + numero [2]) / q;

printf ("media:%2.f", media);



return 0;

}