#include <stdio.h>
#include <stdlib.h>
int main()
{
system("cls");
//variaveis
 int x,y, maior=-9999990, menor=9999999;
//laco
for (x=1;x<=50;x++){
//entrada
printf ("informe um numero \n"); 
scanf ("%d", &y);
//if de maior ou menor
if (y > maior){

    maior = y;}

if (y < menor){

    menor = y;}
}
//saida
printf ("o maior numero eh %d e o menor eh %d\n", maior, menor);
sleep(2);

system("PAUSE");
system("cls");
return 0;
}
