#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float valin, valparc, calc;
system ("cls");
    // entrada
    printf("\n Insira um valor:\n");
    scanf("%f", &valin);

    //calculo
    calc = valin * 0.9;

    //saída
    valparc = calc / 3;
    printf("\nO valor com desconto eh R$ %.2f e o valor da parcela de 3x sem juros eh: R$ %.2f de cada parcela\n\n", calc, valparc);
 system ("pause");
 return (0);   
}