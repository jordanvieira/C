#include <stdio.h>
#include <stdlib.h>
int main()
{
  char nom[100];
  float dist, seg;
  float media;
   printf("Qual seu nome ?");
    fgets(nom,100,stdin);//capturar a string com espaço
   printf("Qual Distancia percorrida em (km) ?");
    scanf("%f", &dist);
   printf("Quantas horas voce levou para percorre-la ?(h)");
    scanf("%f", &seg);
 media = dist/seg;
   printf("\n\nA velocidade media do %s foi %.2f km/h\n",nom,
   media);
 system("pause");
return (0);
}