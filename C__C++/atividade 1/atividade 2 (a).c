#include <stdio.h>
#include <stdlib.h>

int main()
{
  //valores constantes
  float tlp = 2.80, pizz = 10.0, cob = 1.50;
  float num_tlp, num_cob, num_pessoas;
  float parc, total, pgtpess;
 
 system ("cls");
   printf("\n");
   printf("####### PIZZARIA #######");
   printf("\n\n");
   printf("TULIPA DE CHOP: 2,80$\n");
   printf("PIZZA GRANDE 10.00$\n");
   printf("COBERTURA 1,50$\n");
   printf("\n\n");

  //entrada de dados
   printf("Digite a quantidade de Tulips de chope:\n");
   scanf("%f", &num_tlp);
   printf("Digite a quantida de Corberturas:\n");
   scanf("%f",&num_cob);
   printf("Digite a quantidade de pessoas na mesa:\n");
   scanf("%f", &num_pessoas);

   //CALCULO

   parc = (num_tlp * tlp) + pizz + (num_cob * cob);
   total = parc + parc * 0.1;
   pgtpess = total / num_pessoas;

   //saida


   printf("O total da conta com a corgeta do garom foi: %2.f\n", total);
   printf("Cada pessoa deve pagar: %.2f reais!\n", pgtpess);

system ("pause");
system ("cls");
 return (0);
}
