#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("cls");
    int matriz[6][6], contagem = 0,l,c;
   
    for(int l=0; l<6; l++)
    {
        for(int c=0; c<6; c++)
        {
            printf("%d linha, %d coluna = ", l+1, c+1);
            scanf("%d", &matriz[l][c]);
        }
    }
   
    for(int l=0; l<6; l++)
        for(int c=0; c<6; c++)
            if(matriz[l][c] > 10)
                contagem++;
 
 
    printf("\n\n Existem na matriz %d numeros maiores que 10.\n", contagem);
   system("pause");
   system("cls");
    return 0;
}