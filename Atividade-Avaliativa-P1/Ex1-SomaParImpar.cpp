// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE AVALIATIVA - Entrega dia 13/10/2020
// Exerc�cio 1
// Escrever um programa em linguagem C que fa�a a leitura de dois valores
// num�ricos, efetuar a adi��o e apresentar o seu resultado. Caso o valor somado seja
// par. Caso contr�rio imprimir a mensagem que a soma � �mpar.

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
	printf("|         ##### SOMA DE 2 N�MEROS E DEMONSTRA��O SE PAR #####        |\n");
	printf("----------------------------------------------------------------------\n\n");
    printf("  Informe o primeiro valor para soma: ");
    scanf("%d", &num1);
    printf("\n  Informe o segundo valor para soma: ");
    scanf("%d", &num2);
    resultado = num1 + num2;
    printf("\n----------------------------------------------------------------------\n\n");
    if (resultado %2 == 0)
    {
        printf("  O resultado da soma � par. %d + %d = %d.\n", num1, num2, resultado);
    }
    else
    {
        printf("  O resultado da soma � �mpar!\n");
    }
    printf("\n----------------------------------------------------------------------\n\n");
    system("pause");
}