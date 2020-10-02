// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 3 - Entrega dia 18-09-2020
// Exercício 3
// Faça um algoritmo que leia uma temperatura em graus Celsius e apresente-a
// convertida em graus Fahrenheit. A fórmula de conversão é: F = (9 * C + 160) / 5,
// na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius.

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
		// Os comandos entre aspas dentro do comando system são códigos em Batch (Processamento em Lote),
		// que aprendemos na matéria de Sistemas de Informação, com o prof. Humberto Toledo
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
		printf("\n  %.1fº Celsius equivale a %.1fº Fahrenheit.\n\n", celsius, fahrenheit);
		printf("--------------------------------------------------------\n\n");
		printf("  Deseja calcular novamente? [S]im ou [N]ão: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
