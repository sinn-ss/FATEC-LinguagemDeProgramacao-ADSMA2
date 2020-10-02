// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 5 - Entrega dia 01/10/2020
// Exercício 5
// Fatorial é o produto dos números naturais desde 1 até o inteiro n. Assim, o
// cálculo de uma fatorial é conseguido pela multiplicação sucessiva do número
// de termos. Elaborar em linguagem C um programa que calcule a fatorial de um
// número qualquer.

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
  printf("  Informe um número: ");
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
  printf("  O fatorial de %d é igual a %d\n\n", numero, resultado);
	system("PAUSE");
}
