#include <stdlib.h>
#include <stdio.h>


int main () {

int numero [2][2];
int i,j;

printf ("Digite os elementos para  a matiz:\n");
for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
    {
        printf ("Elemetos da linha %d coluna %d:", i + 1, j + 1);
        scanf ("%d", &numero [i] [j]);
    }
    
}




return 0;

}