#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

struct carro
{
  char marca[20];
  int ano;
  char cor[10];
  float preco;
};

int main()
{
    system("cls");
    struct carro vetcarros[20];
    int i, ano_consulta;
    float preco_consulta;
    char marca_consulta[10], cor_consulta[10];

    for ( i = 1; i <= TAM; i++)
    {
        printf("\nInforme a marca do carro:\n");
        scanf("%s",&vetcarros[i].marca);
        printf("\nInforme o ano do carro:\n");
        scanf("%d",&vetcarros[i].ano);
        printf("\nInforme a cor do carro:\n");
        scanf("%s",&vetcarros[i].cor);
        printf("\nInforme o preco do carro:\n");
        scanf("%f",&vetcarros[i].preco);
    }
    printf("\n Informe o preco do carro para a consulta\n");
    scanf("%f",&preco_consulta);


    for ( i = 1; i <= TAM; i++){

    if (vetcarros[i].preco <= preco_consulta)
    {
        printf("\nmarca: %s",vetcarros[i].marca);
        printf("\ncor: %s",vetcarros[i].cor);
        printf("\nano: %d",vetcarros[i].ano);
    }

    }

    printf("\n Informe o marca do carro para a consulta\n");
    scanf("%s",&marca_consulta);

    for ( i = 1; i <= TAM; i++){

     if (strcmp(marca_consulta,vetcarros[i].marca) == 0)
      {
        printf("\npreco: %f",vetcarros[i].preco);
        printf("\nano: %d",vetcarros[i].ano);
        printf("\ncor: %s",vetcarros[i].cor);
        
      }

    }

    printf("\n Informe o marca do carro para a consulta\n");
    scanf("%s",&marca_consulta);
    printf("\n Informe o ano do carro para a consulta\n");
    scanf("%d",&ano_consulta);
    printf("\n Informe a cor do carro para a consulta\n");
    scanf("%s",&cor_consulta);

    for ( i = 1; i <= TAM; i++) {
        if ((strcmp(marca_consulta, vetcarros[i].marca)==0) && (ano_consulta == vetcarros[i].ano) && (strcmp(cor_consulta, vetcarros[i].cor) ==0))

           {
            printf("\n Existe o carro e custa %f:\n", vetcarros[i].preco);
           }
    }
  

 system ("pause");
 system("cls");
 return 0;
 }


