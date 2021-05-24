#include <stdio.h>
#include <stdlib.h>
 int main(){
     system("cls");
     //variaveis
    float gas=2.72, alcool=2.19, litros, custo, desconto, desconto2;
    int combustivel;

    // entrada
    printf("\n\t1-ALCOOL(2.19\\L)\t2-GASOLINA(2.72\\L)\n");
    printf("Digite o numero do combustivel correspondente:\n");
    scanf("%d", &combustivel);
    printf("Digite a quantidade de litros\n");
    scanf("%f", &litros);
      //case + if
     switch (combustivel)
     {
     case 1:
       custo = litros * alcool;
  
         if ( litros <= 20 )
         {
         desconto = custo - custo*0.03;
         printf("\nO total a pagar com 3%% de desconto eh: R$%.2f\n", desconto);

         }else if (litros > 20)
         {
           desconto = custo - custo*0.05;
           printf("\nO total a pagar com 5%% de desconto eh: R$%.2f\n", desconto);
         }
         
       break;
     case 2:
       custo = litros * gas;
        if (litros <= 20)
        {
         desconto2 = custo - custo*0.04;
         printf("\nO total a pagar com 4%% de desconto eh: R$%.2f\n", desconto2);
        }else if (litros > 20)
        {
         desconto2 = custo - custo*0.06;
         printf("\nO total a pagar com 6%% de desconto eh: R$%.2f\n", desconto2);
        }
        
       break;
     default:
       printf("O COMBUSTIVEL QUE VOCE ESCOLHEU NAO CONSTA NA TABELA!\n");
       break;
     }
system("pause");
system ("cls");
return 0;}
