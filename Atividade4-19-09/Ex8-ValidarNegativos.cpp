// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 4 - Entrega dia 19-09-2020
// Exerc�cio 8
// Escrever um programa em linguagem C que leia um valor num�rico inteiro que
// n�o seja negativo. Qualquer outro valor deve apresentar a mensagem "valor
// inv�lido". Se o valor estiver correto, apresentar a mensagem "valor v�lido,
// voc� informou" e colocar junto com a mensagem o valor fornecido.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
  int numero;
  char resposta = 's';
  do
	{
		system("cls");
		system("title Valida��o de n�meros positivos");
		system("mode 56,20");
		system("color 0A");
		printf("--------------------------------------------------------\n");
		printf("|          ##### VALIDAR N�MERO POSITIVO #####         |\n");
		printf("--------------------------------------------------------\n\n");
    printf("  Digite um n�mero inteiro: ");
    scanf("%d", &numero);
    if (numero < 0)
    {
      printf("\n--------------------------------------------------------\n");
      printf("                     VALOR INV�LIDO!\n");
      printf("--------------------------------------------------------\n\n");
    }
    else
    {
      printf("\n--------------------------------------------------------\n");
      printf("     VALOR V�LIDO! O n�mero que voc� digitou foi %d.\n", numero);
      printf("--------------------------------------------------------\n\n");
    }
		printf("Deseja calcular novamente? [S]im ou [N]�o: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
