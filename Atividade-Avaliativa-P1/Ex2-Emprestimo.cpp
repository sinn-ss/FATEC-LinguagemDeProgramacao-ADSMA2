// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE AVALIATIVA - Entrega dia 13/10/2020
// Exerc�cio 2
// Escrever um programa em linguagem C que fa�a a leitura do valor do sal�rio e da
// presta��o. Se presta��o for maior que 30% do sal�rio, imprimir: �Empr�stimo
// negado�. Sen�o imprimir �Empr�stimo aprovado�.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    float salario, prestacao, percentual;

    system("cls");
	system("title Empr�stimo");
	system("mode 70,20");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                 ##### VALIDAR EMPR�STIMO #####                |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf("  Informe o valor do sal�rio: ");
    scanf("%f", &salario);
    printf("\n  Informe o valor da presta��o: ");
    scanf("%f", &prestacao);
    percentual = (prestacao * 100)/salario;
    printf("\n-----------------------------------------------------------------\n\n");
    if (percentual > 30)
    {
        printf("  Parcela maior que 30%% do sal�rio. Empr�stimo negado.\n");
    }
    else
    {
        printf("  Parcela menor que 30%% do sal�rio. Empr�stimo aprovado.\n");
    }
    printf("\n-----------------------------------------------------------------\n\n");
    system("pause");
}