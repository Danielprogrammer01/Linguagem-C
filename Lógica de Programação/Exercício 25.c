#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int pessoas;
    int idade;
    int maiorIdade;
    int menorIdade;
    int mulheresSalario3K;
    int codigo;
    char sexo;
    float salario;
    float salarioTotal;
    float mediaSalarial;

            salarioTotal += salario;
            pessoas++;
            mediaSalarial = salarioTotal / pessoas;

            sexo = toupper(sexo);

            if ((sexo == "F") && (salario > 3000))
            {
                mulheresSalario3K++;
            }
    do
    {

        printf("                                                       \n");
        printf("|=====================================================|\n");
        printf("|                     M E N U                         |\n");
        printf("|=====================================================|\n");
        printf("|        CÓDIGO          |          DESCRIÇÃO         |\n");
        printf("|------------------------|----------------------------|\n");
        printf("|                        |                            |\n");
        printf("|          1             |      Adicionar Pessoa      |\n");
        printf("|                        |                            |\n");
        printf("|          2             |  Sair e Exibir Resultados  |\n");
        printf("|                        |                            |\n");
        printf("|=====================================================| \n");
        

        printf("\nDigite a opção desejada: ");
        scanf("%d", &codigo);


        switch (codigo)
        {
    
            
            case 1:
            
            system("cls || clear");

            printf("\nDigite a idade: ");
            scanf("%d", &idade);

            fflush(stdin);

            printf("\nDigite o sexo (M ou F): ");
            scanf("%c", &sexo);

            fflush(stdin);

            printf("\nDigite o salário: R$ ");
            scanf("%f", &salario);
                break;
            
            case 2:

            codigo = 2;
            
            system("cls || clear");
            printf("\nMédia Salarial do Grupo: R$", mediaSalarial);
            printf("\nMaior idade: ", maiorIdade);
            printf("\nMenor idade: ", menorIdade);
            printf("\nMulheres com salário acima de R$ 3.000,00: \n", mulheresSalario3K);
        
                break;
            
            default:

            printf("Opção Inválida! Digite o código novamente.");

                break;
        }   


    } while (codigo != 2);


    



}
