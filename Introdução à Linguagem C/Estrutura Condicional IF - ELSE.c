#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota1, nota2, media;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7.0)
    {
        printf("Sua media foi de %.1f pontos, portanto, voce esta APROVADO!", media);
    }

    else
    {
        printf("Sua media foi de %.1f, portanto, voce esta REPROVADO!", media);
    }
}