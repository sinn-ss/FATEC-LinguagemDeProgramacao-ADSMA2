// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 4 - Entrega dia 19-09-2020
// Exerc�cio 6
// Desenvolver em linguagem C um programa que aceite valores num�ricos inteiros
// entre 0 (zero) e 9 (nove). Se o valor estiver dentro da faixa, o programa
// deve apresentar a mensagem "valor v�lido". Caso o valor esteja fora da
// faixa, o programa deve apresentar a mensagem "valor inv�lido".

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
		system("title Valida��o de dados");
		system("mode 56,20");
		system("color 0A");
		printf("--------------------------------------------------------\n");
		printf("|            ##### VALIDA��O DE DADOS #####            |\n");
		printf("--------------------------------------------------------\n\n");
		printf("  Digite um n�mero entre 0 e 9: ");
		scanf("%d", &numero);
    if (numero >= 0 && numero <= 9)
    {
      printf("\n--------------------------------------------------------\n");
  		printf("|               ##### VALOR V�LIDO! #####              |\n");
  		printf("--------------------------------------------------------\n\n");
    }
    else
    {
      printf("\n--------------------------------------------------------\n");
  		printf("|              ##### VALOR INV�LIDO! #####             |\n");
  		printf("--------------------------------------------------------\n\n");
    }
		printf("Deseja calcular novamente? [S]im ou [N]�o: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
