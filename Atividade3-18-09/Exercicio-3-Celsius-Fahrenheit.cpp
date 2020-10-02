// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 3 - Entrega dia 18-09-2020
// Exerc�cio 3
// Fa�a um algoritmo que leia uma temperatura em graus Celsius e apresente-a
// convertida em graus Fahrenheit. A f�rmula de convers�o �: F = (9 * C + 160) / 5,
// na qual F � a temperatura em Fahrenheit e C � a temperatura em Celsius.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void)
{
	setlocale(LC_ALL, "");
	float celsius, fahrenheit;
	char resposta = 's';

	do
	{
		// Os comandos entre aspas dentro do comando system s�o c�digos em Batch (Processamento em Lote),
		// que aprendemos na mat�ria de Sistemas de Informa��o, com o prof. Humberto Toledo
		system("title Converter Celsius em Fahrenheit");
		system("mode 56,17");
		system("color 0A");
		printf("--------------------------------------------------------\n");
		printf("|      ##### CONVERTER CELSIUS EM FAHRENHEIT #####     |\n");
		printf("--------------------------------------------------------\n\n");
		printf("  Informe a temperatura em graus Celsius: ");
		scanf("%f", &celsius);
		fahrenheit = (9 * celsius + 160)/5;
		printf("\n--------------------------------------------------------\n");
		printf("|                 ##### RESULTADO #####                |\n");
		printf("--------------------------------------------------------\n");
		printf("\n  %.1f� Celsius equivale a %.1f� Fahrenheit.\n\n", celsius, fahrenheit);
		printf("--------------------------------------------------------\n\n");
		printf("  Deseja calcular novamente? [S]im ou [N]�o: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
