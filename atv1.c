#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main () {
int temperatura;


printf ("Informe a temperatura atual:");
scanf ( "%d", &temperatura);

if (temperatura > 25){
    printf ("O dia esta ensolarado");
} 
if (temperatura < 15){
    printf ("O dia esta chuvoso");
}
 if (temperatura <= 25 && temperatura >= 15) {
    printf ("O dia esta nublado");
}



return 0;





}