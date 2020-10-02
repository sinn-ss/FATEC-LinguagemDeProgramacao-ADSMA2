// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 4 - Entrega dia 19-09-2020
// Exercício 1
// Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a
// fórmula V = 3.14159 * R * R * A, em que as variáveis V, R e A representam,
// respectivamente, o volume, o raio e a altura.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14159

int main(void)
{
	setlocale(LC_ALL, "");
  float volume, raio, altura;
  char resposta = 's';

  do
  {
    system("cls");
    system("title Calcular o volume da lata de óleo");
    system("mode 56,20");
    system("color 0A");
    printf("--------------------------------------------------------\n");
    printf("|           CALCULAR O VOLUME DA LATA DE ÓLEO          |\n");
    printf("--------------------------------------------------------\n\n");
    printf("  Informe o valor do raio em cm: ");
    scanf("%f", &raio);
    printf("\n  Informe o valor da altura em cm: ");
    scanf("%f", &altura);
    volume = PI * raio * raio * altura;
    printf("\n--------------------------------------------------------\n");
    printf("|                 ##### RESULTADO #####                |\n");
    printf("--------------------------------------------------------\n");
    printf("\n  O volume da lata é igual a %.2f cm³.\n\n", volume);
    printf("--------------------------------------------------------\n\n");
    printf("Deseja calcular novamente? [S]im ou [N]ão: ");
		scanf("%s", &resposta);
  } while (resposta == 's' or resposta == 'S');
}
