#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");

    //VARIAVEIS
    float base = 0, altura = 0, area = 0;

    //SAIDA E ENTRADA DE DADOS
    printf("Informe a base do triangulo: ");
    scanf("%f", &base);
    printf("Informe a altura do triangulo: ");
    scanf("%f", &altura);

    //CONDIÇÃO PARA DADOS NULOS
    if (base <= 0 || altura <= 0)
    {
        printf("\nVALOR INVALIDO\n");
    }
    else
    {
        //CALCULO DA AREA
        area = (base * altura) / 2;

        //SAIDA DO RESULTADO
        printf("\nArea do triangulo: %.2f\n", area);
    }

    system("pause");
    system("cls");
}