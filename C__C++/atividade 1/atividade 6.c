#include <stdio.h>
#include <stdlib.h>

int main()
{
system("cls");
//definindo
float lata = 350, garra = 600, garrafa = 2000, lat, ga, gar, resultado;

//entrada
printf("Quantas latas de 350ml voce consumiu?\n");
scanf("%f", &lat);

printf("Quantas garrafas de 600ml voce consumiu?\n");
scanf("%f", &ga);

printf("Quantas garrafas de 2L voce consumiu?\n");
scanf("%f", &gar);

//calculando 
resultado = (lata * lat + garra * ga + garrafa * gar) / 1000;

//saida
printf("A quantidade total consumida de refrigerante em litros eh: %.2fL\n\n", resultado);

system("pause");
return (0);
}