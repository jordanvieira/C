#include <stdio.h>
#include <stdlib.h>
 int main(){
     
     //variaveis
     float preco=0;
     int codi=0,retorno=1;
      while (retorno == 1){
     system("cls");
     //entrada e na tela
     printf("Codigo\tProcedencia %%\tImposto\n");
     printf("1\tSul\t\t11%%\n2\tNorte\t\t13%%\n3\tNordeste\t9%%\n4\tCentro-Oeste\t12%%\n");
     printf("\nDigite o preco liquido do produto\n");
     scanf("%f",&preco);
     printf("\nDigite o codigo de origem correspondente:\n");
     scanf("%d",&codi);

     //entrada switch
     switch (codi)
     {
     case 1:
         preco = preco + preco * 0.11;
         printf("Sua procedencia eh do Sul, entao o preco final eh %.2f com impostos ja incluso!\n", preco);
         printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
         scanf ("%d",&retorno);
         break;
     case 2:
         preco = preco + preco * 0.13;
         printf("Sua procedencia eh do Norte, entao o preco final eh %.2f com impostos ja incluso!\n", preco);
         printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
         scanf ("%d",&retorno);
         break;
     case 3:  
         preco = preco + preco * 0.09;
         printf("Sua procedencia eh do Nordeste, entao o preco final eh %.2f com impostos ja incluso!\n", preco); 
         printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
         scanf ("%d",&retorno); 
         break;
     case 4:
         preco = preco + preco * 0.12;
         printf("Sua procedencia eh do Centro-Oeste, entao o preco final eh %.2f com impostos ja incluso!\n", preco);
         printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
         scanf ("%d",&retorno);
         break;
     default:
        printf ("\nCOMANDO INVALIDO!\n");
        printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
        scanf ("%d",&retorno);
         break;
     }
     




      }

system("pause");
system("cls");
return 0;
 }
