// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 5 - Entrega dia 01/10/2020
// Exerc�cio 6
// Utilize a instru��o do...while para exibir uma segunda vers�o de programa
// para c�lculo da fatorial de um n�mero qualquer.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
  int numero, fatorial, resultado;
  char resposta='s';
  do
	{
    resultado = 1;
		system("cls");
		system("title Fatorial - Repeat");
	  system("mode 65,20");
		system("color 0A");
		printf("-----------------------------------------------------------------\n");
		printf("|                  ##### FATORIAL - REPEAT #####                 |\n");
		printf("-----------------------------------------------------------------\n\n");
    printf("  Informe um n�mero: ");
    scanf("%d", &numero);
    printf("\n");
    printf("-----------------------------------------------------------------\n");
		printf("|                     ##### RESULTADO #####                     |\n");
		printf("-----------------------------------------------------------------\n\n");
    fatorial = numero;
    do
    {
      resultado = resultado * fatorial;
      fatorial--;
    } while (fatorial > 1);
    printf("  O fatorial de %d � igual a %d\n\n", numero, resultado);
    printf("-----------------------------------------------------------------\n");
    printf("  Gostaria de verificar outro fatorial? ");
    scanf("%s", &resposta);
  } while (resposta == 's' or resposta == 'S');
}
