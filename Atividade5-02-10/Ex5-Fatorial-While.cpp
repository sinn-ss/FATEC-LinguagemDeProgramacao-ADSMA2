// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 5 - Entrega dia 01/10/2020
// Exerc�cio 5
// Fatorial � o produto dos n�meros naturais desde 1 at� o inteiro n. Assim, o
// c�lculo de uma fatorial � conseguido pela multiplica��o sucessiva do n�mero
// de termos. Elaborar em linguagem C um programa que calcule a fatorial de um
// n�mero qualquer.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
  int numero, fatorial, resultado;
  resultado = 1;
	system("cls");
	system("title Fatorial");
	system("mode 65,20");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                      ##### FATORIAL #####                     |\n");
	printf("-----------------------------------------------------------------\n\n");
  printf("  Informe um n�mero: ");
  scanf("%d", &numero);
  printf("\n");
  printf("-----------------------------------------------------------------\n");
	printf("|                     ##### RESULTADO #####                     |\n");
	printf("-----------------------------------------------------------------\n\n");
  fatorial = numero;
  while (fatorial > 1)
  {
    resultado = resultado * fatorial;
    fatorial--;
  }
  printf("  O fatorial de %d � igual a %d\n\n", numero, resultado);
	system("PAUSE");
}
