#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3
struct produto
{
    char nome[15];
    char setor[15];
    int quantidade;
    float preco;
    
};
 struct produto vetp[100];

 int cadastro(struct produto vetp[100];){
     int i=0;
     for ( i = 0; i < TAM ; i++)
     {
        system ("cls");
        printf("\nProduto numero :%i",i+1);
        printf("\nDigite o nome do produto:\n");
        scanf("%s",vetp[i].nome);
        printf("\nDigite o setor do produto:\n");
        scanf("%s",vetp[i].setor);
        printf("\nDigite a quantidade do produto:\n");
        scanf("%d",&vetp[i].quantidade);
        printf("\nDigite o valor do produto:\n");
        scanf("%f",&vetp[i].preco);
        
     }
    
 }
  
  int setor_prod(struct produto vetp[100];)
  {

    int i,cont=0;
    char veri[15];

   printf("\nDigite o setor:\n");
   scanf("%s",veri);

     for ( i = 0; i < TAM; i++)
     {
        if ( strcmp(veri,vetp[i].setor)==0)
        {
            cont++;
        }
        
     }
    
    printf("\nA quantidade de produtos nesse setor eh: %d\n",cont);


  }

  int investido(struct produto vetp[100];){
      int i=0;
      float inve=0.0;
      for ( i = 0; i < TAM; i++){


          inve = inve + vetp[i].preco;
      }
   printf("\nO total de produtos investidos eh: %.2fR$",inve);

  }


int main(){

    system("cls");
    int opc=0,retorno=0;
    do {
    system ("cls");
    printf("\n<<<<<<MENU DE OPCOES>>>>>>\n\n");
    printf("\n1 - Cadastrar produtos.");
    printf("\n2 - Verificar quantos produtos existem em um setor.");
    printf("\n3 - Total de capital investido nos produtos do Supermecado.");
    printf("\n4 - Sair do Programa.\n");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        cadastro();
        printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
        scanf ("%d",&retorno);
        break;
    case 2:
        setor_prod();
        printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
        scanf ("%d",&retorno);
        break;
    case 3:
        investido();
        printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
        scanf ("%d",&retorno);
        break;
    case 4:
      retorno =2;
       break;
    default:
     printf("\nopcao invaldida\n");
     printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
     scanf ("%d",&retorno);
     break;
    }
    }while (retorno == 1);




    system("pause");
    system ("cls");
    return 0;
}

/*. Seja um algoritmo para controlar os produtos do estoque de um supermercado. Para cada
produto, tem-se os seguintes campos:
nome: string de tamanho 15
setor: caracter
quantidade: inteiro
preço: real //preço por unidade do produto
Escrever a definição da estrutura produto.
a) Declarar o vetor estoque do tipo da estrutura definida acima, de tamanho 100 e
global.
b) Crie um menu para:
a) Definir um bloco de instruções para ler o vetor estoque.
b) Definir um bloco de instruções que receba um setor e devolva o número de
diferentes produtos desse setor.
c) Definir um bloco de instruções que calcule e devolva o total de capital investido
em produtos do supermercado.
d) Sair do Programa.*/