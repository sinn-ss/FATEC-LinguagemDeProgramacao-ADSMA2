// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE AVALIATIVA - Entrega dia 13/10/2020
// Exercício 4
// Escrever um programa em linguagem C que apresenta o total da soma dos 50
// primeiros números inteiros.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int contador, soma = 0;

    system("cls");
	system("title Somar Primeiros 50 Números");
	system("mode 70,20");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|             ##### SOMAR PRIMEIROS 50 INTEIROS #####           |\n");
	printf("-----------------------------------------------------------------\n\n");
    for (contador = 0; contador <= 50; contador++)
    {
        soma = soma + contador;
    }
    printf("  A soma dos números inteiros de 1 até 50 é igual a %d.\n\n", soma);
    system("PAUSE");
}