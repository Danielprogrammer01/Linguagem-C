#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>


int main(){

setlocale(LC_ALL,"portuguese");

char sexo;
float altura;
float pesoIdeal;

printf("\nM - Masculino");
printf("\nF = Feminino\n");
printf("\nDigite o seu sexo: ");
scanf("%c", &sexo);

printf("\nDigite a sua altura: ");
scanf("%f", &altura);

// Convertendo para mai�sculo.
sexo = toupper(sexo);

switch (sexo) {
case 'M':
    
    pesoIdeal = (72.7 * altura) - 58;

    break;

case 'F':

    pesoIdeal = (62.1 * altura) - 44.7;

    break;

default:

    printf("Opera��o inv�lida!");
    break;
}


printf("\nSeu peso ideal � %.1f Kg.\n", pesoIdeal);

return 0;
}