#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale (LC_ALL,"portuguese");

    float nota;
    float soma;
    int i;
    float media;
    char situacao[250];

        for (i = 1; i <= 3; i++)
    {
        
        do {

            printf("\nDigite a %d� nota do aluno:", i);
            scanf("%f",&nota);

            if (nota < 0 || nota > 10)
            {
            printf("\nNota inv�lida!\nDigite a nota novamente.\n");
            }

        } while (nota < 0 || nota > 10);
    
        soma += nota;
        media = soma / 3.0;

        if (media >= 7.0)
        {
            strcpy(situacao, "Aprovado!");
        }
        else if (media >= 5.0)
        {
            strcpy(situacao, "Em recupera��o!");
        }
        else
        {
            strcpy(situacao, "Reprovado!");
        }
        
    }

    printf("\nM�dia: %.1f\n", media);
    printf("\nSitu��o do Aluno: %s\n", situacao);
    
    return 0;

}