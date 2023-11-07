#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale (LC_ALL, "portuguese");

float valor;
int dia;
float desconto;
float valort;
int conf;

printf ("O valor da sua compra excede 100 reais?:\n SIM | 1 \n NÃO | 2 \n");
scanf ("%i", &conf);

switch (conf)
{
case 1:
  
printf ("Informe o valor da compra:");
scanf ("%f", &valor);


printf ("-----CODIGOS-----\n Segunda / 1 \n Terça / 2 \n Quarta / 3 \n Quinta / 4 \n Sexta / 5 \n Sabado / 6 \n Domingo / 7 \n");
printf ("Informe o dia atual da semana:");
scanf ("%d", &dia);

if (valor > 100 && dia == 1 || 2 || 3 || 4 || 5)
{
    valort = valor * 0.9;
}
if (valor > 100 && dia == 6 || 7){
    valort = valor * 0.85;
} else {
    valor = valor;
}


printf ("Valor do produto:%f \n", valor);
printf ("Valor com descoto:%f \n",valort );
    
    break;

    case 2:
    printf ("Digite o valor do produto:");
    scanf ("%f", &valor);

    printf ("Valor total a pagar:%f", valor);

    break;
}













return 0;
}