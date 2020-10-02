// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 5 - Entrega dia 01/10/2020
// Exercício 4
// Elaborar um programa em linguagem C que solicite seis vezes dois números
// para o cálculo e apresentação de uma adição. O programa deve perguntar ao
// usuário se ele deseja ou não continuar executando o programa.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void)
{
	setlocale(LC_ALL, "");
  int a, b, contador;
  char resposta='S';
	system("cls");
	system("title Somas em Repetição");
	system("mode 65,30");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                 ##### SOMAS EM REPETIÇÃO #####                |\n");
	printf("-----------------------------------------------------------------\n\n");
	contador = 1;
	while (toupper(resposta) == 'S' && contador <= 6)
	{
		printf("  Soma[%d]\n", contador);
    printf("    Termo 1: ");
    scanf("%d", &a);
    printf("    Termo 2: ");
    scanf("%d", &b);
    printf("      %d + %d = %d\n\n", a, b, a+b);
		contador++;
		if (contador <= 6)
		{
			printf("-----------------------------------------------------------------\n");
	  	printf("  Continuar executando o programa? [S] ou [N]:  ");
	  	scanf("%s", &resposta);
			printf("-----------------------------------------------------------------\n\n");
		}
		else
		{
			printf("-----------------------------------------------------------------\n");
	  	printf("  Fim da execução do programa.\n");
			printf("-----------------------------------------------------------------\n\n");
			system("PAUSE");
		}
	}
}
