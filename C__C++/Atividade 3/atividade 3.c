
#include <stdlib.h>
#include <stdio.h>

int main(){
    system ("cls");

    int v=7,c1=0,c2=0,c3=0,c4=0,vn=0,vb=0;

      printf("ELICOES DO BES(2021)!\n");

    while (v!=0)
    {
       printf("\n 1- Mariano\n 2- Pueyo\n 3- Igor\n 4- Jordan\n 5- Voto Nulo\n 6- Voto em Branco\n 0- Encerrar Votacoes\n");
       printf("\nDigite o numero correspondente ao seu voto e aperte ENTER:\n");
       scanf("%i", &v);

       switch (v)
       {
       case 0:
           system("cls");
           printf("Votacao Encerrada!!!\n\n");
           break;
       case 1:
           c1=c1+1;
           system("cls");
           printf("Mariano - voto registrado!");
           break;
       case 2:
           c2=c2+1;
           system("cls");
           printf("Pueyo - voto registrado!");
           break;
        case 3:
           c3=c3+1;
           system("cls");
           printf("Igor - voto registrado!");
           break; 
        case 4:
           c4=c4+1;
           system("cls");
           printf("Jordan - voto registrado!");
           break;
        case 5:
           vn=vn+1;
           system("cls");
           printf("Voto Nulo - voto registrado!");
           break;
        case 6:
           vb=vb+1;
           system("cls");
           printf("Voto em Branco - voto registrado!");
           break;    
       default:
           printf("Candidato nao costa no registro");
           break;
       }
    }

    printf("RESULTADOS:\n Mariano\t %i\n Pueyo\t\t %i\n Igor\t\t %i\n Jordan\t\t %i\n Votos Nulos\t %i\n Votos em Branco %i\n",c1,c2,c3,c4,vn,vb);
    
  system("pause");
  system("cls");
  return 0;
}
