// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE AVALIATIVA - Entrega dia 13/10/2020
// Exercício 9
// Criar um algoritmo que mostra a raiz quadrada dos quadrados perfeitos de 2 a 40
// Suponha que os dados digitados são para um intervalo crescente.
// Exemplo: X = 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 .... 25 .... 36...40
// Quadrados Perfeitos: X = 4 9 ......16 25 ... 36

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int contador;

    system("cls");
	system("title Quadrados Perfeitos");
	system("mode 70,20");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                ##### QUADRADOS PERFEITOS #####                |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf("  Quadrados perfeitos de 2 até 40: \n\n");
    for (contador = 2; contador*contador <= 40; contador++)
    {
        printf("  O número %d é um quadrado perfeito.\n", contador*contador);
    }
    printf("\n-----------------------------------------------------------------\n\n");
    system("PAUSE");
}