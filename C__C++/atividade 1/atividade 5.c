#include <stdio.h>
#include <stdlib.h>

 int main(){
 system ("cls");    
 
//valores constantes
 float kg = 12.00, psd, result;

//entrada
 printf ("Qual o peso do seu prato em quilogramas ?\n");
 scanf("%f",&psd);
// calculo
 result = kg * psd;
//saida
 printf("O valor do seu prato eh: R$%.2f\n\n", result);

 system ("pause");
 system ("cls");
 return(0);
 }



 /*5. O restaurante a quilo Bem-Bão cobra R$ 12,00 por cada quilo de refeição. Escreva um programa
que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a
balança já desconte o peço do prato.*/