// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 5 - Entrega dia 01/10/2020
// Exercício 7
// Utilizando  a  função  (instrução)  for(),  escrever um  programa  que  apresente 
// o resultado dofatorial de um número qualquer lido pelo teclado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
  int numero, contador, resultado;
  char resposta='s';
  do
  {
    resultado = 1;
		system("cls");
		system("title Fatorial - For");
		system("mode 65,20");
		system("color 0A");
		printf("-----------------------------------------------------------------\n");
		printf("|                   ##### FATORIAL - FOR #####                  |\n");
		printf("-----------------------------------------------------------------\n\n");
    printf("  Informe um número: ");
    scanf("%d", &numero);
    printf("\n");
    printf("-----------------------------------------------------------------\n");
		printf("|                     ##### RESULTADO #####                     |\n");
		printf("-----------------------------------------------------------------\n\n");
    for (contador = numero; contador > 1; contador--)
    {
      resultado = resultado * contador;
    }
    printf("  O fatorial de %d é igual a %d\n\n", numero, resultado);
    printf("-----------------------------------------------------------------\n");
    printf("  Gostaria de verificar outro fatorial? ");
    scanf("%s", &resposta);
  } while (resposta == 's' or resposta == 'S');
}
