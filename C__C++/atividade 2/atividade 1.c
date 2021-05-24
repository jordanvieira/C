#include <stdio.h>
#include <stdlib.h>

int main() {
system("cls");
float vendas, salariofixo, comissao, salario;

int carros;

printf("\nInforme o numero de carros vendidos: ");

scanf("%d", &carros);

printf("\nInforme o valor total de suas vendas: ");

scanf("%f", &vendas);

printf("\nInforme o salario fixo: ");

scanf("%f", &salariofixo);

printf("\nInforme o valor da comissao fixa por carro: ");

scanf("%f", &comissao);

salario = salariofixo + (comissao * carros) + (vendas * 0.05);

printf("\nSalario final do vendedor: [%1.3f]\n\n", salario);

system("pause");

return 0;

}
