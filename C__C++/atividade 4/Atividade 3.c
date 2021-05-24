#include <stdio.h>
#include <stdlib.h>
#define TAM 6
int main()
{
system("cls");
int vet[TAM],i,npar=0,nimpar=0;

for(i=0;i < TAM;i++){
   
   printf("\nDigite numeros:\n");
   scanf("%i",&vet[i]);
}
for(i=0;i < TAM;i++){

   if(vet[i]%2 == 0){
     npar++;}
}
nimpar= 6-npar;

printf("\n A quantidade de numeros PAR eh %i",npar);
printf("\n A quantidade de numeros IMPAR eh %i",nimpar);

system ("pause");
system("cls");
return 0;
}
/*Faça um algoritmo que carregue 1 vetor de 6 elementos numéricos inteiros, calcule e
imprima a quantidade de números pares e a quantidade de números ímpares existentes no
vetor.*/