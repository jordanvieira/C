#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int numeroF=0,cont=0;
    float salario=0, mediaS=0,mediaF=0,maiorS=0,pessoasSa=0;
   while ( 2>1)
   { 
     printf("Qual o seu salario?(Salarios negativos Encerra o programa)\n");
     scanf("%f", &salario);
     if (salario<0)
     {
         break;
     }
     printf("Qual o numero de filhos\n");
     scanf("%i",&numeroF);
     
     mediaS=mediaS+salario;
     mediaF=mediaF+numeroF;
      if (maiorS < salario)
      {
          maiorS=salario;

      }else if (salario <250.00)
      {
          pessoasSa++;
      }
      

      cont++;

     
   }

   printf("\n A media do salario da populacao eh R$%.1f\n",mediaS/cont);
   printf("\n A media do numero de filhos eh %.1f\n",mediaF/cont);
   printf("\n O maior salario da populacao eh R$%.1f\n",maiorS);
   printf("\n O Percentual de pessoas com salario ate R$250.00 eh %.1f%%\n",pessoasSa/cont*100);
      
system ("pause");
system("cls");
return 0;
}