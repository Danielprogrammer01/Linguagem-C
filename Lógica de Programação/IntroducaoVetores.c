#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float notas[3];

    printf("Digite a 1� nota: ");
    scanf("%f", &notas[0]);

    printf("Digite a 2� nota: ");
    scanf("%f", &notas[1]);

    printf("Digite a 3� nota: ");
    scanf("%f", &notas[2]);

    printf("\nMostrando notas:\n");
    printf("\n1� Nota: %.1f\n", notas[0]);
    printf("2� Nota: %.1f\n", notas[1]);
    printf("3� Nota: %.1f\n", notas[2]);

    return 0;
}