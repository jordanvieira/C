#include <stdio.h>
#include <stdlib.h>

int main(){
    //valores constantes
    float pao = 0.25, broa = 1.50;
    float total, poupanca, paesv, broav;
    system("cls");

    //entrada
    printf ("Quantos Paes voce vendeu ?\n");
    scanf("%f", &paesv);
    printf ("Quanatas Broas voce vendeu ?\n");
    scanf("%f", &broav);

    //calculo
    total = (broav * broa) + (pao * paesv);
    poupanca = total * 0.1;

    printf ("Voce vendeu %.2f de Paes e Broas!\n", total);
    printf ("Voce deve guarda na conta poupanca %.2f\n\n", poupanca);



    system ("pause");
    system ("cls");
    return (0);
}
