#include <stdio.h>
#include <stdlib.h>

//variaveis globais
int tam, topo = -1, i;
char *pilha, valor;
int c = 167;

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
    //limpar tela
    clear();

    //pergunta de quantidade de caracter para a pilha
    printf("Qual a quantidade de caracter na frase ?\n");
    scanf("%d", &tam);

    //alocando memoria
    pilha = (char *)malloc(tam * sizeof(char));

    if (pilha == NULL)
    {
        printf("MEMORIA INSUFICIENTE");
    }
    else
    {

        //for para capturar a palavra e empilhar caracater por caracter
        for (i = 0; i < tam; i++)
        {
            setbuf(stdin, NULL); //limpando o teclado
            printf("Digite o %d%c caracter da frase\n", i + 1, c);
            scanf("%c", &valor);
            empilha();
        }
        printf("\n");

        //for para desempilhar e printar a palavra invertida
        printf("a palavra invertida eh:\n\n");
        for (i = 0; i < tam; i++)
        {
            desempilha();
            printf("%c", valor);
        }

        printf("\n");

        //liberando memoria da pilha
        free(pilha);

        system("pause");
        clear();
        return 0;
    }
}

//função de limpar tela
void clear()
{
    system("cls");
}
