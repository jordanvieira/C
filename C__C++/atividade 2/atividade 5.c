#include<stdio.h>
#include<stdlib.h>

int main()
{
   system("color 02");
   float pesot=0,pesopl=0;
   int ps=0;
   //entrada
   printf("Numero\tPlaneta\tGravidade Relativa\n");
   printf("1\tMercurio\t0,37\n2\tVenus\t\t0,88\n3\tMarte\t\t0,38\n4\tJupiter\t\t2,64\n5\tSaturno\t\t1,15\n6\tUrano\t\t1,17\n");
   printf("Qual seu Peso na terra(kg)?\n");
   scanf("%f",&pesot);
   printf("Escolha um numero correspondente ao planeta que voce deseja saber o seu peso\n");
   scanf("%i",&ps);
   
   
   //case
   switch (ps)
{

   case 1:
      pesopl = pesot*0.37;
      printf("O seu peso no planeta Mercurio seria: %.2fkg\n",pesopl);
     break;
   case 2:
      pesopl = pesot*0.88;
      printf("O seu peso no planeta Venus seria: %.2fkg\n",pesopl);
     break;
   case 3:
      pesopl = pesot*0.38;
      printf("O seu peso no planeta Marte seria: %.2fkg\n",pesopl);
     break;
   case 4:
      pesopl = pesot*2.64;
      printf("O seu peso no planeta Jupiter seria: %.2f\n",pesopl);
     break;
   case 5:
      pesopl = pesot*1.15;
      printf("O seu peso no planeta Saturno seria: %.2f\n",pesopl);
     break;
   case 6:
      pesopl = pesot*1.17;
      printf("O seu peso no planeta Urano seria: %.2f\n",pesopl);

   default:
     printf("COMANDO INVALIDO");
     break;
}  
    system("pause");
    system("cls");
    return 0;
}
