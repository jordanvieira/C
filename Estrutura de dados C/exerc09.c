#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct do estoque da loja
struct loja
{
    char nome[15];
    int codigo;
    int quantidade;
    float preco;
};
struct loja estoque[5];

//função para iniciar o programa atribuindo valores ao estoque
void inicial()
{
    //cadastrando primeiro elemento
    strcpy(estoque[0].nome, "xiaomi");
    estoque[0].codigo = 1;
    estoque[0].quantidade = 10;
    estoque[0].preco = 1.200;
    //cadastrando primeiro elemento
    strcpy(estoque[1].nome, "LG");
    estoque[1].codigo = 2;
    estoque[1].quantidade = 15;
    estoque[1].preco = 1.500;
    //cadastrando primeiro elemento
    strcpy(estoque[2].nome, "Motorola");
    estoque[2].codigo = 3;
    estoque[2].quantidade = 5;
    estoque[2].preco = 1.000;
    //cadastrando primeiro elemento
    strcpy(estoque[3].nome, "Iphone");
    estoque[3].codigo = 4;
    estoque[3].quantidade = 12;
    estoque[3].preco = 3.000;
    //cadastrando primeiro elemento
    strcpy(estoque[4].nome, "Carregador");
    estoque[4].codigo = 5;
    estoque[4].quantidade = 20;
    estoque[4].preco = 200.00;
}

//função main principal
int main()
{
    //função para chamar o estoque
    inicial();

    //variaveis locais
    int i, cod = 0, quant = 0, op = 0;
    float preco = 0;

    //inicio do while para o loop
    do
    {
        //entrada do codigo do produto
        printf("Digite o codigo do produto: ");
        scanf("%d", &cod);
        //condição caso for 0 encerrar o programa
        if (cod == 0)
        {
            printf("O programa encerrou");
            return 0;
        }
        //entrada para a quantidade do produto
        printf("Digite a quantidade do produto: ");
        scanf("%d", &quant);

        //for para pecorrer o vetor para realizar as condiçoes
        for (i = 0; i < 5; i++)
        {
            //if para realizar a comparação se o codigo existe na
            if (estoque[i].codigo == cod)
            {

                //if para realizar a comparação da quantidade no estoque
                if (quant <= estoque[i].quantidade)
                {
                    preco = quant * estoque[i].preco;//calculando o preço final
                    printf("\nO produto: %s\n", estoque[i].nome);//informando qual é o produto
                    printf("A quantidade solicitada: %d\n", quant);//informando qual é a quantidade do produto
                    printf("O preco total a pagar: %.3f\n\n", preco);//informando qual é o preço final
                    estoque[i].quantidade = estoque[i].quantidade - quant; //fazendo a subtração da quantidade do estoque e atualizando
                    break;
                }
                //else para quantidade não estaja disponivel no estoque
                else
                {
                    //informando para o usuario que não está disponivel a quantidade do produto
                    printf("\nA quantidade disponivel no estoque de codigo: %d, nao atende ao seu pedido!\n\n", cod);
                    break;
                }
            }
            else
            {
                op++;//incremenando a variavel op para realizar o if do codigo do produto não existe 
            }
        }
        //if para o codigo do produto que não existe no estoque
        if (op == 5)
        {
            //informando para o usuario que não existe esse produto
            printf("\nO produto do codigo digitado nao existe\n\n");
        }


    //final do while com a condição para loop
    } while (cod != 0);

    //retornando zero
    return 0;
}
