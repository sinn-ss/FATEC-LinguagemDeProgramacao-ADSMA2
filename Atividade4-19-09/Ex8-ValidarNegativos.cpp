// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 4 - Entrega dia 19-09-2020
// Exercício 8
// Escrever um programa em linguagem C que leia um valor numérico inteiro que
// não seja negativo. Qualquer outro valor deve apresentar a mensagem "valor
// inválido". Se o valor estiver correto, apresentar a mensagem "valor válido,
// você informou" e colocar junto com a mensagem o valor fornecido.

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
		system("title Validação de números positivos");
		system("mode 56,20");
		system("color 0A");
		printf("--------------------------------------------------------\n");
		printf("|          ##### VALIDAR NÚMERO POSITIVO #####         |\n");
		printf("--------------------------------------------------------\n\n");
    printf("  Digite um número inteiro: ");
    scanf("%d", &numero);
    if (numero < 0)
    {
      printf("\n--------------------------------------------------------\n");
      printf("                     VALOR INVÁLIDO!\n");
      printf("--------------------------------------------------------\n\n");
    }
    else
    {
      printf("\n--------------------------------------------------------\n");
      printf("     VALOR VÁLIDO! O número que você digitou foi %d.\n", numero);
      printf("--------------------------------------------------------\n\n");
    }
		printf("Deseja calcular novamente? [S]im ou [N]ão: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
