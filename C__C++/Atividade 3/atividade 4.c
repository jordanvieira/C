#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    float alt, menor=3,maior=0,soma=0,media=0;
    char sexo, sexo_alta;
    int mulher=0,homi=0,i;

    for ( i = 0; i < 15; i++){
    
        printf("\n Digite a altura e sexo da pessoa %d\n", i+1);
        printf("\n  Altura da Pessoa %d:",i+1);
        scanf("%f",&alt);
        printf("\n Sexo M ou F:");
        scanf("%s",&sexo);

        if (sexo == 'M')
         {
           homi++;
         }else if (sexo == 'F')
         {
          mulher++;
          //soma=soma+alt;
          soma=soma+alt;
          media=soma/mulher;
          
         }
         else{
             printf("\nComando invalido eh M ou F, Tente novamente!\n");
             i=i-1;
             continue;
            }
        if (alt>maior)
        {
            sexo_alta=sexo;
            maior=alt;
        }else if (alt<menor)
        {
            menor=alt;
        }
           
    }
    system("cls");
    printf("\n<<<<<RESULTADOS>>>>>\n");
    printf("\n A menor Altura das %d Pessoas cadastradas eh %.2f\n",i,menor);
    printf("\n A media de Altura das %d Mulheres Registradas eh %.2f\n",mulher,media);
    printf("\n O Numero de homens Registrados eh %d\n", homi);
    printf("\n O sexo da pessoa mais alta eh %c \n\n",sexo_alta);
    sleep(2);


system ("pause");
system("cls");
return 0;
}
