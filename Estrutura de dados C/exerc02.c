#include <stdio.h>
#include <math.h> //BIBLIOTECA PARA IMPORTAR AS FUNÇÕES DE MATEMATICA
#include <stdlib.h>

//VARIAVEIS
int num, result, quad;
float raiz;

void main()
{
    system("cls");

    //ENTRA DE DADOS
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    //CALCULO DO NUMERO PAR
    result = num % 2;

    //CONDIÇÃO PAAR EXECUTAR O PROGRAMA
    if (result != 0)
    {
        printf("\nValor invalido\n");
    }

    else
    {
        //CALCULO DO QUADRADO E RAIZ
        quad = num * num;
        raiz = sqrt(num);

        //SAIDA DE DADOS
        printf("O valor do quadrado do numero %d eh: %.2d\n", num, quad);
        printf("O valor da raiz do mesmo numero eh: %.2f\n\n", raiz);
    }

    system("pause");
    system("cls");
}