// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE AVALIATIVA - Entrega dia 13/10/2020
// Exercício 1
// Escrever um programa em linguagem C que faça a leitura de dois valores
// numéricos, efetuar a adição e apresentar o seu resultado. Caso o valor somado seja
// par. Caso contrário imprimir a mensagem que a soma é ímpar.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int num1, num2, resultado;

    system("cls");
	system("title Soma");
	system("mode 70,20");
	system("color 0A");
	printf("----------------------------------------------------------------------\n");
	printf("|         ##### SOMA DE 2 NÚMEROS E DEMONSTRAÇÃO SE PAR #####        |\n");
	printf("----------------------------------------------------------------------\n\n");
    printf("  Informe o primeiro valor para soma: ");
    scanf("%d", &num1);
    printf("\n  Informe o segundo valor para soma: ");
    scanf("%d", &num2);
    resultado = num1 + num2;
    printf("\n----------------------------------------------------------------------\n\n");
    if (resultado %2 == 0)
    {
        printf("  O resultado da soma é par. %d + %d = %d.\n", num1, num2, resultado);
    }
    else
    {
        printf("  O resultado da soma é ímpar!\n");
    }
    printf("\n----------------------------------------------------------------------\n\n");
    system("pause");
}