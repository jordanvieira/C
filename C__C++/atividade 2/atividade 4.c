#include <stdio.h>
#include <stdlib.h>
 int main(){
     //variavel
     float c=0,d=0,v=0,ciq=0,r=0, calc=0;
     //entrada
    printf("<<<<<CONTADOR DE MOEDAS!>>>>>\n");
    printf("Quantas moedas de R$0.5 centavos?\n");
    scanf("%f",&c);
    printf("Quantas moedas de R$0.10 centavos?\n");
    scanf("%f",&d);
    printf("Quantas moedas de R$0.25 centavos?\n");
    scanf("%f",&v);
    printf("Quantas moedas de R$0.50 centavos?\n");
    scanf("%f",&ciq);
    printf("Quantas moedas de R$1.00 real?\n");
    scanf("%f",&r);
    //calculo
    calc= (c * 0.05)+(d*0.10)+(v*0.25)+(ciq*0.50)+r;
    //saida
    printf("Voce economizou %.2f Reais\n",calc);

    

system("pause");
system ("cls");
return 0;
 }
