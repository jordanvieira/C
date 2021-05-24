#include <stdio.h>
#include <stdlib.h>
#include <math.h>//BIBLIOTECA PARA IMPORTAR AS FUNÇÕES DE MATEMATICA

//VARIAVEIS
int i = 0, n = 0, result = 0;

void main()
{
    system("cls");

    //ENTRA DE DADOS
    printf("Insira um numero inteiro: ");
    scanf("%d", &i);

    //CALCULO DO NUMERO PAR
    result = i % 2;

    //CONDIÇÃO PAAR EXECUTAR O PROGRAMA
    if (result != 0 && result >= 0 || result < 0)
    {
        printf("\nValor invalido\n");
    }

    else
    {
        //SAIDA DE DADOS
        printf("Numeros pares:\n");
        for (n = i; n >= 1; n--)
        {
            //SAIDA DOS NUMEROS PARES EM ORDEM DECRESCENTE
            if (n % 2 == 0)
                printf(" %d\n", n);
        }
    }

    system("pause");
    system("cls");
}
