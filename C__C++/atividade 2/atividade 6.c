#include<stdio.h>
#include<stdlib.h>

int main()
{    //variaveis
    float rendaM=0;

    system("cls");
    system("color 02");
     //entrada
    printf("qual sua renda mensal?\n");
    scanf("%f",&rendaM);
    //if mais calculo
    if (rendaM <= 1164.00)
    {
        printf("voce esta insento de imposto de Renda");
    }else if (rendaM >1164.00 && rendaM <= 2326.00)
    {
        printf("Voce deve pagar %.2f de imposto de renda\n",rendaM *0.15);
        
    }else if (rendaM > 2326.00 )
    {
        printf("Voce deve pagar %.2f de imposto de renda\n",rendaM *0.275);
    }
    
    system("pause");
    system("cls");
 return 0;
}
