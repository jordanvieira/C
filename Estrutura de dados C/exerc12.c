#include <stdio.h>
#include <stdlib.h>
int cont = 0;

//bubbleSort para ordenar
void bubbleSort(int *v, int N)
{
    int i, continua, aux, fim = N;

    do
    {

        continua = 0;

        for (i = 0; i < fim - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                continua = i;
                cont++;
            }
        }
        fim--;

    } while (continua != 0);
}

int main()
{
    int vet[5];

    for (int i = 0; i < 5; i++)
    {
        //inserindo valores
        printf("\nPosicao %d, digite um numero: ", i);
        scanf("%d", &vet[i]);
    }
    //ordenando o array
    bubbleSort(vet, 5);

    //printando a ordenação
    printf("\nValores ordenados\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", vet[i]);
    }
    //printando a quantidade de comparacoes
    printf("quantidades de comparacoes eh:%d ", cont);

    return 0;
}