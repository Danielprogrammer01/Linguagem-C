#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int dia;
    char diaDaSemana[250];
    char tipoDoDia[250];

    printf("Digite o n�mero do dia: ");
    scanf("%d", &dia);

    fflush(stdin);

    switch (dia)
    {
    case 1:
        strcpy(diaDaSemana, "Domingo"); 
        strcpy(tipoDoDia, "Final de semana!");
        break;
    case 2:
        strcpy(diaDaSemana, "Segunda-Feira");
        strcpy(tipoDoDia, "Dia �til!");  
        break;
    case 3:
        strcpy(diaDaSemana, "Ter�a-Feira");
        strcpy(tipoDoDia, "Dia �til!");  
        break;
    case 4:
        strcpy(diaDaSemana, "Quarta-Feira");
        strcpy(tipoDoDia, "Dia �til!");  
        break;
    case 5:
        strcpy(diaDaSemana, "Quinta-Feira");
        strcpy(tipoDoDia, "Dia �til!");  
        break;
    case 6:
        strcpy(diaDaSemana, "Sexta-Feira");
        strcpy(tipoDoDia, "Dia �til!");  
        break;
    case 7:
      strcpy(diaDaSemana, "S�bado"); 
        strcpy(tipoDoDia, "Final de semana!"); 
        break;

    default:
        printf("Dia Inv�lido!");
        break;
    }

    printf("%s\n", diaDaSemana);
    printf("%s",tipoDoDia);

    return 0;
}