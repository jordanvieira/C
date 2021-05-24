#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 4


    struct ender {
	char rua[60];
	char num[60];
	char comp[60];
	char bairro[60];
	char cep[60];
	char cidade[60];
	char estado[60];
	char pais[60];
    };

    struct data {
    int dia;
	int mes;
	int ano;
     };

    struct ficha{
    char nome[60];
	char email[60];
	struct ender endereco;
	char telefone[60];
	struct data nasc;
	char obs[60];

    };
int main(){
    struct ficha bancoDados[2];
    int x,retorno=1,compara;
    int op, dia, mes,ano,i;
	char nome[20];

    do
    {
     system("cls");
    printf("\n============ Agenda ============\n\n");
	printf("1- Inserir Contado\n");
	printf("2- Buscar Contato\n");
	printf("3- Remover contato\n");
	printf("4- Imprimir contatos\n");
	printf("5- Sair\n");
	printf("\n================================\n\n");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
	   system("cls");
       for (i = 0; i < TAM; i++)
    {
    setbuf(stdin, NULL);
	printf("=================================\n");
	printf("\n");
	printf("Nome: ");
    fgets(bancoDados[i].nome,60,stdin);
	printf("Email: ");
	fgets(bancoDados[i].email,60,stdin);
	setbuf(stdin, NULL);
    printf("Telefone: ");
	fgets(bancoDados[i].telefone,60, stdin);
	setbuf(stdin, NULL);
    printf("Data de Nascimento: ");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	setbuf(stdin, NULL);
	bancoDados[i].nasc.dia = dia;
	bancoDados[i].nasc.mes = mes;
	bancoDados[i].nasc.ano = ano;
	printf("Oservacao:\n");
	fgets(bancoDados[i].obs,60, stdin);
	setbuf(stdin, NULL);
	printf("\n");
	printf("Rua: ");
	fgets(bancoDados[i].endereco.rua,60, stdin);
	setbuf(stdin, NULL);
	printf("Numero: ");
	fgets(bancoDados[i].endereco.num,60, stdin);
	setbuf(stdin, NULL);
	printf("Complemento: ");
	fgets(bancoDados[i].endereco.comp,60, stdin);
	setbuf(stdin, NULL);
	printf("Bairro: ");
	fgets(bancoDados[i].endereco.bairro,60, stdin);
	setbuf(stdin, NULL);
	printf("CEP: ");
	fgets(bancoDados[i].endereco.cep, 60, stdin);
	setbuf(stdin, NULL);;
	printf("Cidade: ");
	fgets(bancoDados[i].endereco.cidade, 60, stdin);
	setbuf(stdin, NULL);
	printf("Estado: ");
	fgets(bancoDados[i].endereco.estado,60, stdin);
	setbuf(stdin, NULL);
	printf("Pais: ");
	fgets(bancoDados[i].endereco.pais, 60, stdin);
	setbuf(stdin, NULL);
    }
        
        break;
    case 2:  
	       system("cls");
	       printf("Deseja buscar o contato por:\n");
	       printf("1- Nome\n");
	       printf("2- Mes de Aniversario\n");
	       printf("3- Dia e Mes de Aniversario\n");
		   printf("4- Voltar para o Menu\n");

	       printf("\nEntre com a opcao: ");
	       scanf("%d", &op);
	       switch (op)
	     {
	     case 1:
		     system("cls");
		     setbuf(stdin, NULL);
             printf("Entre com o nome do contato: ");
             fgets(nome,60, stdin);

              for ( i = 0; i < TAM; i++)
             {

		     if(strcmp(nome,bancoDados[i].nome) == 0) {


             printf("\n============================================\n");
	         printf("\n");
	         printf("---------------- Dados ---------------\n");
	         printf("Nome: %s", bancoDados[i].nome);
	         printf("Email: %s\n", bancoDados[i].email);
	         printf("Telefone: %s\n", bancoDados[i].telefone);
	         printf("Nascimento: %d/%d/%d\n", bancoDados[i].nasc.dia, bancoDados[i].nasc.mes, bancoDados[i].nasc.ano);
	         printf("Observacoes: %s", bancoDados[i].obs);
	         printf("--------------- Endereco -------------\n");
	         printf("Rua: %s", bancoDados[i].endereco.rua);
	         printf("N: %s\n", bancoDados[i].endereco.num);
	         printf("Complemento: %s", bancoDados[i].endereco.comp);
	         printf("Bairro: %s", bancoDados[i].endereco.bairro);
	         printf("CEP: %s\n", bancoDados[i].endereco.cep);
	         printf("Cidade: %s",bancoDados[i].endereco.cidade);
	         printf("Estado: %s", bancoDados[i].endereco.estado);
	         printf("Pais: %s", bancoDados[i].endereco.pais);
	         printf("\n============================================\n");
        }
           }
            printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
            scanf ("%d",&retorno);
		    break;
		case 2: 
		    system("cls");
		    printf("\nQual o mes de aniversario:\n");
			scanf("%i",&mes);
             for ( i = 0; i < TAM; i++)
			 {
		
			  if ( mes == bancoDados[i].nasc.mes)
			  {
				printf("\n============================================\n");
	            printf("\n");
	            printf("---------------- Dados ---------------\n");
	            printf("Nome: %s", bancoDados[i].nome);
	            printf("Email: %s\n", bancoDados[i].email);
	            printf("Telefone: %s\n", bancoDados[i].telefone);
	            printf("Nascimento: %d/%d/%d\n", bancoDados[i].nasc.dia, bancoDados[i].nasc.mes, bancoDados[i].nasc.ano);
	            printf("Observacoes: %s", bancoDados[i].obs);
	            printf("--------------- Endereco -------------\n");
	            printf("Rua: %s", bancoDados[i].endereco.rua);
	            printf("N: %s\n", bancoDados[i].endereco.num);
	            printf("Complemento: %s", bancoDados[i].endereco.comp);
	            printf("Bairro: %s", bancoDados[i].endereco.bairro);
	            printf("CEP: %s\n", bancoDados[i].endereco.cep);
	            printf("Cidade: %s",bancoDados[i].endereco.cidade);
	            printf("Estado: %s", bancoDados[i].endereco.estado);
	            printf("Pais: %s", bancoDados[i].endereco.pais);
	            printf("\n============================================\n");
			  }
			 }
			printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
            scanf ("%d",&retorno);
		    break;
			case 3:
			  system("cls");
			  printf("\nQual o dia e mes de aniversario:\n");
			  scanf("%i/%i",&dia,&mes);
             for ( i = 0; i < TAM; i++)
			 {
		
			   if (dia == bancoDados[i].nasc.dia && mes == bancoDados[i].nasc.mes )
			   {

                printf("\n============================================\n");
	            printf("\n");
	            printf("---------------- Dados ---------------\n");
	            printf("Nome: %s", bancoDados[i].nome);
	            printf("Email: %s\n", bancoDados[i].email);
	            printf("Telefone: %s\n", bancoDados[i].telefone);
	            printf("Nascimento: %d/%d/%d\n", bancoDados[i].nasc.dia, bancoDados[i].nasc.mes, bancoDados[i].nasc.ano);
	            printf("Observacoes: %s", bancoDados[i].obs);
	            printf("--------------- Endereco -------------\n");
	            printf("Rua: %s", bancoDados[i].endereco.rua);
	            printf("N: %s\n", bancoDados[i].endereco.num);
	            printf("Complemento: %s", bancoDados[i].endereco.comp);
	            printf("Bairro: %s", bancoDados[i].endereco.bairro);
	            printf("CEP: %s\n", bancoDados[i].endereco.cep);
	            printf("Cidade: %s",bancoDados[i].endereco.cidade);
	            printf("Estado: %s", bancoDados[i].endereco.estado);
	            printf("Pais: %s", bancoDados[i].endereco.pais);
	            printf("\n============================================\n");

			   }
			 }   
			 printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
             scanf ("%d",&retorno); 
			break;
		 case 4:
		 main();
		    break;
	   
	     default:
		     printf("opcao invalida\n");
		     break;
	     }
       
     break;
	case 3:
	   system("cls");
	   printf("\n============================================");
	   printf("\nRemover Contato");
	   printf("\n============================================\n");
	   setbuf(stdin, NULL);
	   printf(" Digite nome: ");
       fgets(nome, 60, stdin);
       printf(" Mes do aniversario: ");
       scanf("%i", &mes);
       printf(" Dia do aniversario: ");
       scanf("%i", &dia);
	for(i=0; i<=TAM; i++){
       compara=strcmp(nome, bancoDados[i].nome);

        if(compara==0 && dia==bancoDados[i].nasc.dia && mes==bancoDados[i].nasc.mes){
          for(i=i; i<TAM+1; i++) {
		  strcpy(bancoDados[i].nome, bancoDados[i+1].nome);
		  strcpy(bancoDados[i].email, bancoDados[i+1].email);

		  strcpy(bancoDados[i].endereco.rua, bancoDados[i+1].endereco.rua);
		  strcpy(bancoDados[i].endereco.num, bancoDados[i+1].endereco.num);
		  strcpy(bancoDados[i].endereco.comp, bancoDados[i+1].endereco.comp);
		  strcpy(bancoDados[i].endereco.bairro, bancoDados[i+1].endereco.bairro);
		  strcpy(bancoDados[i].endereco.cep, bancoDados[i+1].endereco.cep);
		  strcpy(bancoDados[i].endereco.cidade, bancoDados[i+1].endereco.cidade);
		  strcpy(bancoDados[i].endereco.estado, bancoDados[i+1].endereco.estado);
		  strcpy(bancoDados[i].endereco.pais, bancoDados[i+1].endereco.pais);

		  strcpy(bancoDados[i].telefone, bancoDados[i+1].telefone);

		   bancoDados[i].nasc.dia = bancoDados[i+1].nasc.dia;
		   bancoDados[i].nasc.mes = bancoDados[i+1].nasc.mes;
		   bancoDados[i].nasc.ano = bancoDados[i+1].nasc.ano;

		 strcpy(bancoDados[i].obs, bancoDados[i+1].obs);
		  }
	 }
	}
	 printf("\nCONTATO REMOVIDO!\n");
	 printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
     scanf ("%d",&retorno);
	  break; 
	case 4:
	      printf("1- Contato Reduzido('nome, telefone e e-mail)\n");
	      printf("2- Contato Completo\n");
		  printf("3- Voltar para o menu\n");
	
	      printf("\nEntre com a opcao: ");
	      scanf("%d", &op);

		  switch (op)
		  {
		  case 1:
		     system("cls");
		     for (i = 0; i < TAM; i++)
		    {
			    printf("\n============================================\n");
	            printf("\n");
	            printf("---------------- Dados ---------------\n");
	            printf("Nome: %s", bancoDados[i].nome);
	            printf("Email: %s\n", bancoDados[i].email);
	            printf("Telefone: %s\n", bancoDados[i].telefone);
	            printf("\n============================================\n");
		    }
			printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
            scanf ("%d",&retorno);
			break;
		   case 2:
		     system("cls");
		     for (i = 0; i < TAM; i++){
                printf("\n============================================\n");
	            printf("\n");
	            printf("---------------- Dados ---------------\n");
	            printf("Nome: %s", bancoDados[i].nome);
	            printf("Email: %s\n", bancoDados[i].email);
	            printf("Telefone: %s\n", bancoDados[i].telefone);
	            printf("Nascimento: %d/%d/%d\n", bancoDados[i].nasc.dia, bancoDados[i].nasc.mes, bancoDados[i].nasc.ano);
	            printf("Observacoes: %s", bancoDados[i].obs);
	            printf("--------------- Endereco -------------\n");
	            printf("Rua: %s", bancoDados[i].endereco.rua);
	            printf("N: %s\n", bancoDados[i].endereco.num);
	            printf("Complemento: %s", bancoDados[i].endereco.comp);
	            printf("Bairro: %s", bancoDados[i].endereco.bairro);
	            printf("CEP: %s\n", bancoDados[i].endereco.cep);
	            printf("Cidade: %s",bancoDados[i].endereco.cidade);
	            printf("Estado: %s", bancoDados[i].endereco.estado);
	            printf("Pais: %s", bancoDados[i].endereco.pais);
	            printf("\n============================================\n");

			 }
			 printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
             scanf ("%d",&retorno);
			  break;
			  case 3:
			   main();
			  break;
		  
		  default:
			  break;
		  }
	  break;
	   case 5:
	   printf("\n Encerrando o programa");
	   sleep(1);
	   printf("\n .");
	   sleep(1);
	   printf("\n ..");
	   sleep(1);
       printf("\n ...\n");
	   sleep(1);
	   retorno=2;
	   break;
    default:
	   printf("\n opcao invalida");
	   printf("\nDeseja voltar para o menu?:\n 1- SIM\n 2- NAO\n");
       scanf ("%d",&retorno);
        break;

    }
    
   }while (retorno == 1);
   system("pause");
   system("cls");
    return 0;
}
