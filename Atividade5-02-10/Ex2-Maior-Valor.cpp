// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 5 - Entrega dia 01/10/2020
// Exerc�cio 2
// Fa�a um programa que leia 3 n�meros e imprima o maior.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
  int a, b, c, maior;
  char resposta='s';
  do
	{
		system("cls");
		system("title Exibir Maior Entrada");
		system("mode 65,20");
		system("color 0A");
		printf("-----------------------------------------------------------------\n");
		printf("|                ##### EXIBIR MAIOR ENTRADA #####               |\n");
		printf("-----------------------------------------------------------------\n\n");
    printf("  Digite o valor de A: ");
    scanf("%d", &a);
    printf("\n");
    printf("  Digite o valor de B: ");
    scanf("%d", &b);
    printf("\n");
    printf("  Digite o valor de C: ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
      maior = a;
    }
    else if (b > a && b > c)
    {
      maior = b;
    }
    else
    {
      maior = c;
    }
    printf("\n");
    printf("-----------------------------------------------------------------\n");
		printf("|                     ##### RESULTADO #####                     |\n");
		printf("-----------------------------------------------------------------\n\n");
    printf("  O maior n�mero inserido foi %d.\n\n", maior);
    printf("-----------------------------------------------------------------\n");
    printf("  Gostaria de verificar outro n�mero? ");
    scanf("%s", &resposta);
  } while (resposta == 's' or resposta == 'S');
}
