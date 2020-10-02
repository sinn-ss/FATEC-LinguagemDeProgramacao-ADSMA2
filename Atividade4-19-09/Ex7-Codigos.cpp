// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 4 - Entrega dia 19-09-2020
// Exerc�cio 7
// Escrever um programa em linguagem C que leia um valor num�rico inteiro
// referente aos c�digos 1, 2 ou 3. Qualquer outro valor deve apresentar a
// mensagem "c�digo inv�lido". Se o valor estiver correto, apresentar o valor
// do c�digo escrito por extenso.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
  int codigo;
  char resposta = 's';
  do
	{
		system("cls");
		system("title Leitura de C�digos");
		system("mode 56,20");
		system("color 0A");
		printf("--------------------------------------------------------\n");
		printf("|              ##### LENDO C�DIGOS #####               |\n");
		printf("--------------------------------------------------------\n\n");
		printf("  Digite o n�mero correspondente ao c�digo: ");
		scanf("%d", &codigo);
    printf("\n");
    switch (codigo)
    {
      case 1:
        printf ("  C�digo UM.\n\n");
        break;
      case 2:
        printf ("  C�digo DOIS.\n\n");
        break;
      case 3:
        printf ("  C�digo TR�S.\n\n");
        break;
      default:
        printf ("  C�digo inv�lido!\n\n");
    }
    printf("--------------------------------------------------------\n\n");
		printf("Deseja inserir novo c�digo? [S]im ou [N]�o: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
