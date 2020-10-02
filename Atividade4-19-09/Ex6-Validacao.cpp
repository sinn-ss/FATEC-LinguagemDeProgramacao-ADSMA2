// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 4 - Entrega dia 19-09-2020
// Exercício 6
// Desenvolver em linguagem C um programa que aceite valores numéricos inteiros
// entre 0 (zero) e 9 (nove). Se o valor estiver dentro da faixa, o programa
// deve apresentar a mensagem "valor válido". Caso o valor esteja fora da
// faixa, o programa deve apresentar a mensagem "valor inválido".

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
		system("title Validação de dados");
		system("mode 56,20");
		system("color 0A");
		printf("--------------------------------------------------------\n");
		printf("|            ##### VALIDAÇÃO DE DADOS #####            |\n");
		printf("--------------------------------------------------------\n\n");
		printf("  Digite um número entre 0 e 9: ");
		scanf("%d", &numero);
    if (numero >= 0 && numero <= 9)
    {
      printf("\n--------------------------------------------------------\n");
  		printf("|               ##### VALOR VÁLIDO! #####              |\n");
  		printf("--------------------------------------------------------\n\n");
    }
    else
    {
      printf("\n--------------------------------------------------------\n");
  		printf("|              ##### VALOR INVÁLIDO! #####             |\n");
  		printf("--------------------------------------------------------\n\n");
    }
		printf("Deseja calcular novamente? [S]im ou [N]ão: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
