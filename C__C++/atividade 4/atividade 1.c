#include <stdio.h>
#include <stdlib.h>
int main()
{
system("cls");
int TAMA=10;
int vet[TAMA],maior,i;

for ( i = 0; i < TAMA; i++)
{   printf("\n Digite um numero para o vetor\n");
    scanf("%i",&vet[i]);}


//gerando o maior
maior=vet[0];

for ( i = 1; i <TAMA; i++)
{
    if (vet[i] > maior)
    {
        maior = vet[i];
    }
    
}
printf("\n O maior numero do vetor eh %i\n",maior);
    
system ("pause");
system("cls");
return 0;
}
/*Faça um algoritmo que receba do usuário um vetor com 10 valores inteiros, apresente o
maior valor*/
