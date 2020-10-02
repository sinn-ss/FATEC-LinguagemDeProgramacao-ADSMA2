// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 4 - Entrega dia 19-09-2020
// Exercício 7
// Escrever um programa em linguagem C que leia um valor numérico inteiro
// referente aos códigos 1, 2 ou 3. Qualquer outro valor deve apresentar a
// mensagem "código inválido". Se o valor estiver correto, apresentar o valor
// do código escrito por extenso.

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
		system("title Leitura de Códigos");
		system("mode 56,20");
		system("color 0A");
		printf("--------------------------------------------------------\n");
		printf("|              ##### LENDO CÓDIGOS #####               |\n");
		printf("--------------------------------------------------------\n\n");
		printf("  Digite o número correspondente ao código: ");
		scanf("%d", &codigo);
    printf("\n");
    switch (codigo)
    {
      case 1:
        printf ("  Código UM.\n\n");
        break;
      case 2:
        printf ("  Código DOIS.\n\n");
        break;
      case 3:
        printf ("  Código TRÊS.\n\n");
        break;
      default:
        printf ("  Código inválido!\n\n");
    }
    printf("--------------------------------------------------------\n\n");
		printf("Deseja inserir novo código? [S]im ou [N]ão: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
