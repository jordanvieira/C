#include <stdio.h>
#include <string.h>

//variaveis globais
int i, TAM = 3, aluno, retornar = 0;
float media, maiorM = 0, maiornota1 = 0, maiornota2 = 0;

//struct BES
struct BES
{
    char nome[20];
    int matricula;
    float notaav1, notaav2;
};
struct BES alunos[3]; //associando BES a definição de struct

//função de maior nota da 1 avaliação
void maioravali1();

//função de maior nota da 2 avaliação
void maioravali2();

//função da mior media geral
void mediageral();

//função de limpar tela
void clear();

//função principal
int main()
{
    int op;

    //limpando tela
    clear();
    //for para mostrar e capturar dados
    for (i = 0; i < TAM; i++)
    {
        printf("Digite o nome do %d aluno: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Digite o numero de matricula do aluno: %s: ", alunos[i].nome);
        scanf("%d", &alunos[i].matricula);
        printf("Digite a nota da 1 avalicao do aluno: %s: ", alunos[i].nome);
        scanf("%f", &alunos[i].notaav1);
        printf("Digite a nota da 2 avalicao do aluno: %s: ", alunos[i].nome);
        scanf("%f", &alunos[i].notaav2);
    }

    //do while para o loop
    do
    {

        //menu com opçoes
        printf("1- Nome do aluno com a maior nota da AV1\n");
        printf("2- Nome do aluno com a maior nota da AV2\n");
        printf("3- Nome do aluno com a maior media geral\n");
        printf("4- Sair\n");
        printf("\nDigite a opcao: ");
        scanf("%d", &op);

        //case para selicionar a opção e chamar as funçoes
        switch (op)
        {
        case 1:
            maioravali1();
            break;
        case 2:
            maioravali2();
            break;
        case 3:
            mediageral();
            break;
        case 4:

            printf("O programa encerrou\n");
            return 0;

        default:
            printf("\ncomando invalido\n");
            break;
        }
        //imprimir se desejar voltar a encerrar o programa usando o do while
        printf("\n");
        printf("Deseja continuar ?\n 0 -- sim , 1-- nao: ");
        scanf("%d", &retornar);

    } while (retornar == 0);

    return 0;
}

//funçoes utilizadas no codigo
//maior nota da av1
void maioravali1()
{
    for (i = 0; i < TAM; i++)
    {
        if (alunos[i].notaav1 > maiornota1)
        {
            maiornota1 = alunos[i].notaav1;
            aluno = alunos[i].nome;
        }
    }
    printf("o aluno %s teve a maior nota: %.2f", aluno, maiornota1);
}

//maior nota da av2
void maioravali2()
{
    for (i = 0; i < TAM; i++)
    {
        if (alunos[i].notaav2 > maiornota2)
        {
            maiornota2 = alunos[i].notaav2;
            aluno = alunos[i].nome;
        }
    }
    printf("o aluno %s teve a maior nota: %.2f", aluno, maiornota2);
}

//maior media geral
void mediageral()
{
    for (i = 0; i < TAM; i++)
    {

        media = (alunos[i].notaav1 + alunos[i].notaav2) / 2;

        if (media > maiorM)
        {
            maiorM = media;
            aluno = alunos[i].nome;
        }
    }
    printf("o aluno %s teve a maior media: %.2f", aluno, maiorM);
}

//limpar tela
void clear()
{
    system("cls");
}