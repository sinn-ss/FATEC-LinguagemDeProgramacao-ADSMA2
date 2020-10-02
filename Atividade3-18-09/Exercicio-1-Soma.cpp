// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 3 - Entrega dia 18-09-2020
// Exercício 1
// Faça um algoritmo em C que:
// a) Leia um número inteiro;
// b) Leia um segundo número inteiro;
// c) Efetue a adição dos dois valores;
// d) Apresente o valor calculado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int num1, num2;
	char resposta = 's';

	do
	{
		// Os comandos entre aspas dentro do comando system são códigos em Batch (Processamento em Lote),
		// que aprendemos na matéria de Sistemas de Informação, com o prof. Humberto Toledo
		system("cls");
		system("title Soma de dois números");
		system("mode 56,20");
		system("color 0A");
		printf("--------------------------------------------------------\n");
		printf("|            ##### SOMA DE DOIS NÚMEROS #####          |\n");
		printf("--------------------------------------------------------\n\n");
		printf("Digite um número inteiro: ");
		scanf("%d", &num1);
		printf("\nDigite outro número inteiro: ");
		scanf("%d", &num2);
		printf("\n--------------------------------------------------------\n");
		printf("|                 ##### RESULTADO #####                |\n");
		printf("--------------------------------------------------------\n");
		printf("\nO valor da soma de %d + %d é igual a %d.\n\n", num1, num2, num1+num2);
		printf("--------------------------------------------------------\n\n");
		printf("Deseja calcular novamente? [S]im ou [N]ão: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
