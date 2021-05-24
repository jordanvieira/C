#include <stdio.h>
#include <stdlib.h>

//variaveis globais
int tam, valor = 0, retornar = 0, op, *M, *N, i, cont = 1;

//função de limpar tela
void clear();

//função principal
int main()
{
    //limpar tela 
    clear();

    //capturar a quantidade do vetor M e N
    printf("Qual a quantidade do vetor  ?: ");
    scanf("%d", &tam);

    //alocando memoria
    M = (int *)malloc(tam * sizeof(int));
    N = (int *)malloc(tam * sizeof(int));
    //resultado = (int *)malloc(tam * sizeof(int));

    if (M == NULL || N == NULL)
    {
        printf("MEMORIA INSUFICIENTE");
    }
    else
    {
        //for para capturar o valor do vetor M e N
        for (i = 0; i < tam; i++)
        {
            printf("Insira o valor da posicao %d do vetor M\n", cont++);
            scanf("%d", &M[i]);
        }
        for (i = 0; i < tam; i++)
        {
            printf("Insira o valor da posicao %d do vetor N\n", cont++);
            scanf("%d", &N[i]);
        }

        //do while para loop do menu
        do
        {
            //limpar tela
            clear();

            //menu de opçoes
            printf("1) O produto de M por N\n");
            printf("2) A soma de M com N\n");
            printf("3) A diferenca de M com N\n");
            printf("4) Sair do programa\n");

            scanf("%d", &op);

            //função para escolher a opcao
            switch (op)
            {
            case 1:
                //for com printf para percorrer o vetor e multiplicar as posiçoes
                for (i = 0; i < tam; i++)
                {
                    printf("Resultado do produto das posicoes dos vetores M e N eh: %d\n", M[i] * N[i]);
                }

                break;
            case 2:
                //for com printf para percorrer o vetor e somar as posiçoes
                for (i = 0; i < tam; i++)
                {
                    printf("Resultado da soma das posicoes dos vetores M e N eh: %d\n", M[i] + N[i]);
                }

                break;
            case 3:
                //for com printf para percorrer o vetor e subtrair as posiçoes
                for (i = 0; i < tam; i++)
                {
                    printf("Resultado da diferenca das posicoes dos vetores M e N eh: %d\n", M[i] - N[i]);
                }

                break;
            case 4:
                //encerrando e limpando a memoria dos vetores
                printf("O programa encerrou e liberou a memoria\n");
                free(M);
                free(N);
                return 0;
            }
            //a pergunta do while para fazer o loop do menu
            printf("\nVoltar para o menu ?\n0 -- sim , 1-- nao:\n");
            scanf("%d", &retornar);
        } while (retornar == 0);
    }
    //limpar a memoria dos vetores
    free(M);
    free(N);

    system("pause");
    clear();
    return 0;
}

//função de limpar tela
void clear()
{
    system("cls");
}
