// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 3 - Entrega dia 18-09-2020
// Exerc�cio 1
// Fa�a um algoritmo em C que:
// a) Leia um n�mero inteiro;
// b) Leia um segundo n�mero inteiro;
// c) Efetue a adi��o dos dois valores;
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
		// Os comandos entre aspas dentro do comando system s�o c�digos em Batch (Processamento em Lote),
		// que aprendemos na mat�ria de Sistemas de Informa��o, com o prof. Humberto Toledo
		system("cls");
		system("title Soma de dois n�meros");
		system("mode 56,20");
		system("color 0A");
		printf("--------------------------------------------------------\n");
		printf("|            ##### SOMA DE DOIS N�MEROS #####          |\n");
		printf("--------------------------------------------------------\n\n");
		printf("Digite um n�mero inteiro: ");
		scanf("%d", &num1);
		printf("\nDigite outro n�mero inteiro: ");
		scanf("%d", &num2);
		printf("\n--------------------------------------------------------\n");
		printf("|                 ##### RESULTADO #####                |\n");
		printf("--------------------------------------------------------\n");
		printf("\nO valor da soma de %d + %d � igual a %d.\n\n", num1, num2, num1+num2);
		printf("--------------------------------------------------------\n\n");
		printf("Deseja calcular novamente? [S]im ou [N]�o: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
