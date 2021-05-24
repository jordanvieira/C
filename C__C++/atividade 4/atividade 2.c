#include <stdio.h>
#include <stdlib.h>
int main()
{
system("cls");

int vet[40],soma,maior=0,menor=0,i=0;

for(i=0;i<40;i++){
printf("\nQual a idade da pessoa %i\n",i+1);
scanf("%i",&vet[i]);}


for(i=0;i<40;i++){
    if(vet[i]>maior)
    {
       maior=vet[i];
   
    }
    
 }
menor = vet[0];
for(i=1;i<40;i++){
    if(vet[i]<menor)
    {
       menor=vet[i];
   
    }
    
 }
soma=maior+menor;

printf("\n A soma da maior e menor idade das %i pessoas registradas eh %i",i,soma);

system ("pause");
system("cls");
return 0;
}
   