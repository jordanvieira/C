#include <stdio.h>
#include <stdlib.h>
int cont = 0;
//função de pesquisaBinaria para realizar a pesquisa no vetor
void pesquisaBinaria(int nomeVetor[], int procura, int tam)
{
    int inicio = 0;
    int fim = tam - 1;
    int meio = (inicio + fim) / 2;

    while (procura != nomeVetor[meio] && inicio != fim)
    {
        if (procura > nomeVetor[meio])
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio;
        }
        meio = (inicio + fim) / 2;
        cont++;
    }
    if (nomeVetor[meio] == procura)
    {
        printf("\nValor encontrado\n");
    }
    else
    {
        printf("\nValor nao encontrado");
    }
}

//função bubbleSort para fazer a ordenação
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
            }
        }
        fim--;

    } while (continua != 0);
}

int main()
{
    //variaveis e numeros do vetor desordenado
    int num;
    int vet[32] = {24, 1, 10, 20, 17, 23, 12, 19, 25, 14, 31, 16, 6, 7, 27, 4, 26, 29, 28, 3, 2, 13, 30, 22, 21, 18, 5, 15, 32, 9, 11, 8};
    

    //ordenando o array
    bubbleSort(vet, 32);

    //entrada para a pesquisaBinaria
    printf("Digite um numero inteiro para a pesquisa: \n");
    scanf("%d", &num);
    //realizando a pesquisa binaria
    pesquisaBinaria(vet, num, 32);

    printf("O numero de pesquisa feitas foi de: %d", cont);

    return 0;
}