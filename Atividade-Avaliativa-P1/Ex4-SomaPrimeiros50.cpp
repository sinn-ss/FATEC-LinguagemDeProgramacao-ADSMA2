// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE AVALIATIVA - Entrega dia 13/10/2020
// Exerc�cio 4
// Escrever um programa em linguagem C que apresenta o total da soma dos 50
// primeiros n�meros inteiros.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int contador, soma = 0;

    system("cls");
	system("title Somar Primeiros 50 N�meros");
	system("mode 70,20");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|             ##### SOMAR PRIMEIROS 50 INTEIROS #####           |\n");
	printf("-----------------------------------------------------------------\n\n");
    for (contador = 0; contador <= 50; contador++)
    {
        soma = soma + contador;
    }
    printf("  A soma dos n�meros inteiros de 1 at� 50 � igual a %d.\n\n", soma);
    system("PAUSE");
}