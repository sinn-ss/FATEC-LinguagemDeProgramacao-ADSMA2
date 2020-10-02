// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 5 - Entrega dia 01/10/2020
// Exercício 3
// Efetuar a leitura de três valores (variáveis a b e c) para calcular a
// equação de segundo grau. Lembre-se de que somente será uma equação de
// segundo grau se o valor da variável A for diferente de zero. Outro detalhe
// é que somente existirá o cálculo das raízes se o valor de delta for
// diferente de zero. É necessário considerar também o fato de o valor de
// delta ser igual a 80 Estudo Dirigido de Linguagem C zero. Se isso ocorrer,
// existirá apenas o cálculo de uma raiz. Sugestão: utilize a biblioteca math.h
// (#include <math.h>) antes da função "main()".

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
	setlocale(LC_ALL, "");
  int a, b, c, delta;
  float x1, x2;
  char resposta='s';
  do
	{
		system("cls");
		system("title Equação de 2º Grau");
		system("mode 65,30");
		system("color 0A");
		printf("-----------------------------------------------------------------\n");
		printf("|                 ##### EQUAÇÃO DE 2º GRAU #####                |\n");
		printf("-----------------------------------------------------------------\n\n");
    printf("  Digite o valor de A: ");
    scanf("%d", &a);
    while (a == 0)
    {
      printf("\n");
      printf("  Valor de A não pode ser 0!\n");
      printf("  Digite o valor de A: ");
      scanf("%d", &a);
    }
    printf("\n");
    printf("  Digite o valor de B: ");
    scanf("%d", &b);
    printf("\n");
    printf("  Digite o valor de C: ");
    scanf("%d", &c);
    printf("\n");
    printf("-----------------------------------------------------------------\n");
		printf("|                      ##### EQUAÇÃO #####                      |\n");
		printf("-----------------------------------------------------------------\n\n");
    printf("  Equação: (%dx²)+(%dx)+(%d)\n\n", a, b, c);
    delta = pow(b,2)-4*a*c;
    printf("-----------------------------------------------------------------\n");
		printf("|                       ##### DELTA #####                       |\n");
		printf("-----------------------------------------------------------------\n\n");
    printf("  Delta = %d\n\n", delta);
    x1 = ((b*-1)+sqrt(delta))/(2*a);
    x2 = ((b*-1)-sqrt(delta))/(2*a);
    printf("-----------------------------------------------------------------\n");
		printf("|                       ##### RAÍZES #####                      |\n");
		printf("-----------------------------------------------------------------\n\n");
    if (delta == 0)
    {
      printf("  A equação possui apenas 1 raiz real, pois Delta = 0.\n\n");
      printf("  Valor de x: %.2f\n\n", x1);
    }
    else
    {
      printf("  Valor de x1: %.0f\n\n", x1);
      printf("  Valor de x2: %.0f\n\n", x2);
    }
    printf("-----------------------------------------------------------------\n");
    printf("  Gostaria de verificar outro número? ");
    scanf("%s", &resposta);
  } while (resposta == 's' or resposta == 'S');
}
