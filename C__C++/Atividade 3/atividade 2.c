#include <stdio.h>
#include <stdlib.h>
int main()
{
  //variavel
  int n, i=0,opcao,q;
do
{
//entrada
 system ("cls");
 printf("<<<<< TABUADA >>>>>\n");
 printf("Digite o numero da tabuada:\n");
 scanf("%d",&n);
 printf("Voce quer fazer a tabuada de %d ate quanto ?\n",n);
 scanf("%d",&q);
 //for calculo
 for (i = 0; i <= q; i++)
 {
    printf("%d X %d = %d\n",n,i,n*i);
 }
 //saida
 printf("\n1- Novo Calculo!\n2- Sair\n");
 scanf("%d",&opcao); 
} while (opcao != 2);


system ("pause");
system("cls");
return 0;
}
