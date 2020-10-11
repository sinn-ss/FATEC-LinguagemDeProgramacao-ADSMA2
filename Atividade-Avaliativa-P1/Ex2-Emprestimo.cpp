// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE AVALIATIVA - Entrega dia 13/10/2020
// Exercício 2
// Escrever um programa em linguagem C que faça a leitura do valor do salário e da
// prestação. Se prestação for maior que 30% do salário, imprimir: “Empréstimo
// negado”. Senão imprimir “Empréstimo aprovado”.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    float salario, prestacao, percentual;

    system("cls");
	system("title Empréstimo");
	system("mode 70,20");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                 ##### VALIDAR EMPRÉSTIMO #####                |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf("  Informe o valor do salário: ");
    scanf("%f", &salario);
    printf("\n  Informe o valor da prestação: ");
    scanf("%f", &prestacao);
    percentual = (prestacao * 100)/salario;
    printf("\n-----------------------------------------------------------------\n\n");
    if (percentual > 30)
    {
        printf("  Parcela maior que 30%% do salário. Empréstimo negado.\n");
    }
    else
    {
        printf("  Parcela menor que 30%% do salário. Empréstimo aprovado.\n");
    }
    printf("\n-----------------------------------------------------------------\n\n");
    system("pause");
}