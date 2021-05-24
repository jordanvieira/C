#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 40

  struct estrutura
  {
    float area,valor;
    char nome[15];
    int numero,numeroM;

  };
   struct estrutura global[40];

   int cadastro(struct estrutura global[40];)
 {
     int i=0;

     for (i = 0; i < TAM; i++) {
        system("cls");
		printf("\nMORADOR %i:\n", i + 1);
        setbuf(stdin, NULL);
		printf("\nDigite o seu nome: ");
		scanf("%[^\n]s", global[i].nome);
		printf("\nDigite o numero do apartamento:\n");
		scanf(" %i", &global[i].numero);
		printf("\nDigite a area do apartamento:\n");
		scanf("%f", &global[i].area);
		printf("\nDigite o numero de moradores:\n");
		scanf(" %i", &global[i].numeroM);
		printf("\nDigite o valor por mes:\n");
		scanf(" %f", &global[i].valor);
	   }

 }
 int areatotal(struct estrutura global[40];){
    int i, total = 0;
	for (i = 0; i < TAM; i++) {
		total = total + global[i].area;
	 }
	
	printf("\n A area total em M2 %i\n", total);

 }


int areaMensalidade(struct estrutura global[40];)
{
	int i;
	float despesas=0, calculo=0, soma=0,total=0;

	printf("\nQual a area total do condominio?");
    scanf("%f",&total);

	for (i = 0; i < TAM; i++) {
        printf("O MORADOR %i",i+1);
		printf("\nDespesa por mes: ");
		scanf("%f",&despesas);

		soma = soma + despesas;
	}
	calculo = soma / total;
	printf("\n A Despesa por apartamento: %.2f\n", calculo);
}

int numeropessoas(struct estrutura global[40];)
{

   int i=0, n=0, morador=0;

	n = global[0].numeroM;

	for (i = 0; i < TAM;i++){
		if(n < global[i].numeroM)
        {
			n = global[i].numeroM;
			morador = i;
		}
	}
	printf("\nO morador %s e o que tem mais pessoas com %i", global[morador].nome, n);


}


int main()
{ 
 
    


    int retorno = 0, opc=0, total=0;
do
{       
        system("cls");
		printf("\n\nGESTAO DO CONDOMINIO\n\n");
		printf(
			" 1 - Cadastra dados\n 2 - Area total do "
			"condominio\n 3 - Area total por mensalidade\n 4 - Apartamento "
			"com mais moradores\n 5 - Sair\n");
		scanf("%i", &opc);

		switch (opc) {
         case 1:
         cadastro();
         printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
         scanf ("%d",&retorno);
          break;
         case 2:
         areatotal();
         printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
         scanf ("%d",&retorno);
           break;
        case 3:
         areaMensalidade();
         printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
         scanf ("%d",&retorno);
           break;
        case 4:
        numeropessoas();
        printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
        scanf ("%d",&retorno);
           break;
        case 5:
           break;

        }

    }while (retorno == 1);

    system("pause");
    system ("cls");
    return 0;
}

/*  Seja um sistema destinado a controlar despesas e dados de um condomínio de
apartamentos.
Os dados de cada apartamento são armazenados em um vetor de estruturas. Para cada
apartamento tem-se os seguintes dados:
 nome (do responsável)  scanf("%[^\n]s"
 número (do apartamento)
 área (em m2)
 número de moradores
 valor (a ser pago no mês)
Definir a estrutura acima

a. Declarar um vetor de estruturas (global), suponde que o condomínio tem 40
apartamentos.
b. Crie um menu para:
i. Escrever um bloco de instruções responsável por ler o vetor acima,
exceto o campo valor.
ii. Escrever um bloco de instruções que retorne a área total do
condomínio.
iii. Escrever um bloco de instruções que receba a área total do
condomínio; leia o total de despesas do mesmo e calcule para cada
apartamento o valor a ser pago no mês. Esse valor é proporcional à
área do apartamento.
iv. Fazer um bloco de instruções para imprimir os dados do apartamento
que tem o maior número de moradores. Em caso de haver mais de
um, imprimir todos.
v. Escrever um bloco de instruções para sair do programa.*/