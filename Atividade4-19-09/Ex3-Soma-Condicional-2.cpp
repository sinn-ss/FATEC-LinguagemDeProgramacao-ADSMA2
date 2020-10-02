// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 4 - Entrega dia 19-09-2020
// Exerc�cio 3
// Escrever um programa em linguagem C que fa�a a leitura de dois valores
// num�ricos e efetuar a adi��o. Caso o valor somado seja maior ou igual a 10,
// deve ser apresentado somando a ele mais 5. Caso o valor somado n�o seja
// maior ou igual a 10, deve ser apresentado subtraindo dele 7.

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
		system("title Soma Condicional 2");
		system("mode 56,20");
		system("color 0A");
		printf("--------------------------------------------------------\n");
		printf("|            ##### SOMA CONDICIONAL 2 #####            |\n");
		printf("--------------------------------------------------------\n\n");
		printf("  Digite um n�mero inteiro: ");
		scanf("%d", &a);
		printf("\n  Digite outro n�mero inteiro: ");
		scanf("%d", &b);
		printf("\n--------------------------------------------------------\n");
		printf("|                 ##### RESULTADO #####                |\n");
		printf("--------------------------------------------------------\n");
    resultado = a+b;
    if (resultado >= 10)
    {
      printf("  O resultado da soma � maior ou igual a 10.\n");
      printf("  Por isso, iremos somar +5 ao resultado.\n");
		  printf("  O valor da soma de %d + %d + 5 � igual a %d.\n\n", a, b, resultado+5);
    }
    else
    {
      printf("  O resultado da soma � menor que 10.\n");
      printf("  Por isso, iremos subtrair -7 do resultado.\n");
      printf("  O valor de %d + %d - 7 � igual a %d.\n\n", a, b, resultado-7);
    }
		printf("--------------------------------------------------------\n\n");
		printf("Deseja calcular novamente? [S]im ou [N]�o: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
