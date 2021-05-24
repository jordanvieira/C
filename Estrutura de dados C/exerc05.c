#include <stdio.h>
#include <stdlib.h>

//Inicialização e variaveis globais
int tam = 8, topo = -1, valor = 0, retornar = 0, i;
int pilha[8];

//função empilha ou push
void empilha()
{
    if (topo == tam - 1)

    {
        printf("\n  ** Pilha Cheia ** \n");
    }
    else
    {
        topo++;
        pilha[topo] = valor;
    }
}

//desempilhar a pilha
void desempilha()
{
    if (topo == -1)
    {
        printf("\n  ** Pilha Vazia ** \n");
    }
    else
    {
        valor = pilha[topo];
        topo--;
    }
}

//função de limpar tela
void clear();

//função principal
int main()
{
    do
    {
        clear();
        //variaveis locais
        int consulta = 0, posicao = 0, test;

        //for para cadastrar as placas do veiculos e armazenar na pilha
        for (i = 0; i < tam; i++)
        {
            printf("Cadastro de placas de carros\n");
            scanf("%d", &valor);
            empilha();
        }

        printf("\n");

        //entra da consulta
        printf("Digite o carro para retirar\n");
        scanf("%d", &consulta);

        //para armazenar o valor da cunsulta para verificar
        for (i = 0; i < tam; i++)
        {
            if (consulta == pilha[i])
            {
                test = 1;
            }
        }

        //verificar se o carro está na vila
        if (test == 1)
        {
            printf("O carro esta na vila, Placa: %d\n", consulta);
        }
        else
        {
            printf("O carro nao esta na vila, Placa: %d\n\n", consulta);

            //for para mostrar os carros que estão cadastrados
            for (i = 0; i < tam; i++)
            {
                desempilha();
                printf("Estes sao os carros de placas: %d : cadastrados!\n", valor);
            }
            printf("Deseja continuar ?\n 0 -- sim , 1-- nao: ");
            scanf("%d", &retornar);
        }

        printf("\n\n");

        //for final para pecorrer o vetor
        for (i = 0; i < tam; i++)
        {
            //funcao desempilhar para chegar no valor desejado
            desempilha();

            //if para consultar os carros que tem que sair
            if (consulta == valor)
            {
                break;
            }
            else
            {
                //imprime o resultado
                printf("O carro da placa %d precisa sair, para o carro da placa %d poder sair.\n", valor, consulta);
            }
        }
        printf("\n");
        printf("Deseja continuar ?\n 0 -- sim , 1-- nao: ");
        scanf("%d", &retornar);

    } while (retornar == 0);

    system("pause");
    clear();
    return 0;
}

void clear()
{
    system("cls");
}
