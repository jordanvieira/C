#include <stdio.h>
#include <stdlib.h>

//variaveis globais
int tam = 5, topo = 0, valor = 0, retornar = 0, op, op1, i;
int *pilha;

//função de inicializar pilha
void inicializar()
{
    topo = -1;
}
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

//acessar o topo da pilha
void acessoTopo()
{
    if (topo == -1)
    {
        printf("\n  ** Pilha Vazia ** \n");
    }
    else
    {

        printf("\nElemnto do topo: %d\n", pilha[topo]);
    }
}

//situacao da pilha
void situacaoPilha()
{
    if (topo == -1)
    {
        printf("\n  ** Pilha Vazia ** \n");
    }
    else
    {
        if (topo == tam - 1)
        {
            printf("\n  ** Pilha Cheia ** \n");
        }
        else
        {
            printf("\nTotal de elementos na pilha: %d", topo + 1);
            printf("\nEspaco disponivel na pilha: %d\n", tam - (topo + 1));
        }
    }
}

//função de limpar tela
void clear();

//função principal
int main()
{
    //alocando memoria
    pilha = (int *)malloc(tam * sizeof(int));
    if (pilha == NULL)
    {
        printf("MEMORIA INSUFICIENTE");
    }
    else
    {
        //do while para loop do menu
        do
        {
            //limpar tela
            clear();

            //menu de opçoes
            printf("   #### MENU DA PILHA ####\n\n");
            printf("1 - Inicializar a pilha\n");
            printf("2 - Inserir um valor na pilha\n");
            printf("3 - Remover um valor da pilha\n");
            printf("4 - Mostrar elemento no topo da Pilha\n");
            printf("5 - Mostrar a sintuacao da pilha\n");
            printf("6 - Sair\n");
            scanf("%d", &op);

            //função para escolher a opcao
            switch (op)
            {
            case 1:
                if (topo == 0)
                {
                    inicializar();
                    printf("A pilha foi inicializada\n");
                    break;
                }
                else
                {
                    printf("A pilha ja foi inicializada!\n");
                    break;
                }

            case 2:
                printf("digite o valor que deseja inserir na pilha:\n");
                scanf("%d", &op1);
                valor = op1;
                empilha();
                break;
            case 3:
                desempilha();
                printf("O valor tirado da pilha foi %d", valor);

                break;
            case 4:
                acessoTopo();
                break;
            case 5:
                situacaoPilha();
                break;
            case 6:
                printf("O programa encerrou\n");
                free(pilha);
                return 0;
            }
            printf("\nVoltar para o menu ?\n0 -- sim , 1-- nao:\n");
            scanf("%d", &retornar);
        } while (retornar == 0);
    }
    //limpar pilha
    free(pilha);

    system("pause");
    clear();
    return 0;
}

void clear()
{
    system("cls");
}
