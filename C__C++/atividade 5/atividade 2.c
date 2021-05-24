#include <stdio.h>
#include <stdlib.h>
#define TAM 200

struct nascimento
{
    int mes ;
    int ano ;
};

struct registro
{
    int codigo;
    float leite;
    float alimento;
    char abate;
    struct nascimento nasc;
};

int main()
{

  struct registro gadovetor[200];
  int i=0,ano=0,x=0,abates=0,retorno=0;
  float soma=0, alimentodia=0,somaleite,somaalimento=0;


    for (i = 0; i < TAM; i++)
    {
      printf("Digite o codigo do gado: ");
        scanf("%d", &gadovetor[i].codigo);
        printf("Digite a quantidade de leite que o gado fornece por semana - em litros: ");
        scanf("%f", &gadovetor[i].leite);
        printf("Digite a quantidade de alimento ingerida por semana - em quilos: ");
        scanf("%f", &gadovetor[i].alimento);
        printf("Digite a data de nascimento do gado\n");
        printf("Mes: ");
        scanf("%d", &gadovetor[i].nasc.mes);
        printf("Ano: ");
        scanf("%d", &gadovetor[i].nasc.ano);

        ano= 2021 - gadovetor[i].nasc.ano;
		    alimentodia = gadovetor[i].alimento / 7;

        if ( ano > 5 || gadovetor[i].leite < 40 || (gadovetor[i].leite > 50 && gadovetor[1].leite < 70 && alimentodia > 50))
        {
             abates+=1;
             gadovetor[i].abate = 'S';
             printf("\no gado deve ser abatido: %c \n", gadovetor[i].abate);
        }else
        {
           somaalimento = somaalimento + gadovetor[i].alimento;
           somaleite = somaleite + gadovetor[i].leite;
           gadovetor[i].abate = 'N';
           printf("\n o gado nao deve ser abatido: %c \n", gadovetor[i].abate);
        }

    }

    do
        {
        system("cls");
        printf("Escolha uma das opcoes:");
        printf("\n1 - Verificar a quantidade total de leite produzida por semana na fazenda.");
        printf("\n2 - Verificar a quantidade total de alimento consumido por semana na fazenda.");
        printf("\n3 - Verificar a quantidade total de leite que vai ser produzido por semana na fazenda, apos o abate.");
        printf("\n4 - Verificar a quantidade total de alimento que vai ser consumido por semana na fazenda, apos o abate.");
        printf("\n5 - Verificar o numero de cabe�as de gado que iram para o abate.");
        printf("\n6 - Sair\n");
        scanf("%d",&x);


     switch (x)
     {
     case 1:
       for (i = 0;i < TAM; i++)
            {
                soma = soma + gadovetor[i].leite;
            }
            printf("\n");
            printf("A quantidade de leite que o todo o gado oferece por semana eh de %.2f Litros.\n", soma);
            printf("Deseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
            scanf ("%d",&retorno);
            break;
      case 2:
        for ( i = 0; i < TAM; i++)
       {
         soma = soma + gadovetor[i].alimento;
       }
         printf("A quantidade de alimento que o todo o gado consome por semana eh de %.2f kg.\n", soma);
         printf("Deseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
         scanf ("%d",&retorno);
            break;
     case 3:

            printf("A quantidade de Leite que sera consumido por semana apos o abate sera de %.2f Litros.\n", somaleite);
            printf("Deseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
            scanf ("%d",&retorno);
             break;
      case 4:
            printf("A quantidade de alimento que sera consumido por semana apos o abate sera de %.2f kg.\n", somaalimento);
            printf("Deseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
            scanf ("%d",&retorno);
            break;
      case 5:
            printf("A quantidade de cabecas que irao para o abate eh de %d\n", abates);
            printf("Deseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
            scanf ("%d",&retorno);
       break;
      case 6:
       retorno=2;
       break;
     }
  }while (retorno == 1);




 system ("pause");
 system("cls");
 return 0;
}
