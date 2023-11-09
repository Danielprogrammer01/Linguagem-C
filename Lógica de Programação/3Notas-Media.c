#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int quantidadeNotas = 3;
    float notas[quantidadeNotas];
    float soma = 0;
    float media;
    char situacao[250];

    /*Solicitando dados ao usu�rio*/

    for (i = 0; i < quantidadeNotas; i++)
    {
    printf("Digite a %d� nota: ", i+1);
    scanf("%f", &notas[i]);        
    soma += notas[i];
    }

    system("cls || clear");

    /*Calculando a m�dia*/

    media = soma/quantidadeNotas;

    /*Determinando a situa��o do aluno*/

    if (media >= 7)
    {
        strcpy(situacao, "Aprovado!");
    }
    else if (media >= 5)
    {
        strcpy(situacao, "Em recupera��o!");
    }
    else
    {
        strcpy(situacao, "Reprovado!");
    }

    /*Exibindo resultados*/

    printf("Mostrando notas:\n\n");
    
    for (i = 0; i < quantidadeNotas; i++)
    {
    printf("%d� Nota: %.1f pontos\n", i+1, notas[i]);
    }
    
    printf("\nM�dia: %.1f pontos\n", media);
    
    printf("\nSitua��o do Aluno: %s\n", situacao);


    

    return 0;
}