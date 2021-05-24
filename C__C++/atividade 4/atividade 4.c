#include <stdio.h>
#include <stdlib.h>
int main()
{
system("cls");
int aprovados=0, i=0;
	float soma=0, a[10];
	
	
		printf("\n Adicione a media de 10 alunos:\n");
		
		for(i=0; i<10; i++)
		{
			printf(" Nota %i:  ", i+1);
			scanf("%f", &a[i]);
			
			soma+=a[i];
			if(a[i]>=7) {aprovados++;}
		}
		printf("\n\n A media das notas foi de %f", soma/10);
		printf("\n O total de alunos aprovados eh %i e %i reprovaram.\n", aprovados, 10-aprovados);
		
			
system ("pause");
system("cls");
return 0;
}
