#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"portuguese");   

    int numero;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    if (numero > 10) 
    {
        printf("O valor � MAIOR que 10!");
    }
    else if (numero < 10)
    {
        printf("O valor � MENOR que 10!");
    }
    else 
    {
        printf("O valor � IGUAL que 10!");
        }
    
    return 0;
}

// = Atibui��o
// == Compara��o
// != Diferente
// ! Nega��o