// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 4 - Entrega dia 19-09-2020
// Exerc�cio 2
// Escrever um programa em linguagem C que fa�a a leitura de dois valores
// num�ricos, efetuar a adi��o e apresentar o seu resultado caso o valor
// somado seja maior que 10.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
  int a, b, resultado;
  char resposta = 's';
  do
	{
		system("cls");
		system("title Soma Condicional 1");
		system("mode 56,20");
		system("color 0A");
		printf("--------------------------------------------------------\n");
		printf("|            ##### SOMA CONDICIONAL 1 #####            |\n");
		printf("--------------------------------------------------------\n\n");
		printf("  Digite um n�mero inteiro: ");
		scanf("%d", &a);
		printf("\n  Digite outro n�mero inteiro: ");
		scanf("%d", &b);
		printf("\n--------------------------------------------------------\n");
		printf("|                 ##### RESULTADO #####                |\n");
		printf("--------------------------------------------------------\n");
    resultado = a+b;
    if (resultado > 10)
    {
		  printf("\n  O valor da soma de %d + %d � igual a %d.\n\n", a, b, resultado);
    }
    else
    {
      printf("\n  A soma dos valores n�o � maior que 10!\n\n");
    }
		printf("--------------------------------------------------------\n\n");
		printf("Deseja calcular novamente? [S]im ou [N]�o: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
