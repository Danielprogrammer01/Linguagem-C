#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"portuguese");   

    int numero;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("\nO n�mero � PAR!");
    }
    else
    {
        printf("\nO n�mero � �MPAR!");
    }

    return 0;    
}