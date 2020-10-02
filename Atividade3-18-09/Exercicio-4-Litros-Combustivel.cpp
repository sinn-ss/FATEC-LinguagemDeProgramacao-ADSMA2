// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 3 - Entrega dia 18-09-2020
// Exerc�cio 4
// Fa�a um algoritmo que calcule a quantidade de litros de combust�vel gasta em uma
// viagem, utilizando um autom�vel que faz 12Km por litro. Para obter o c�lculo, o
// usu�rio deve fornecer o tempo gasto na viagem e a velocidade m�dia durante ela.
// Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula:
// distancia = tempo *velocidade. Tendo o valor da dist�ncia, basta calcular a
// quantidade de litros de combust�vel utilizada na viagem com a f�rmula:
// litros_usados = distancia / 12. O programa deve apresentar os valores da
// velocidade m�dia, tempo gasto na viagem, a dist�ncia percorrida e a quantidade
// de litros utilizada na viagem.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define KMLITRO 12

int main(void)
{
	setlocale(LC_ALL,"");
	int tempo;
	float vmedia, distancia, litros;
	char resposta = 's';

	do
	{
		// Os comandos entre aspas dentro do comando system s�o c�digos em Batch (Processamento em Lote),
		// que aprendemos na mat�ria de Sistemas de Informa��o, com o prof. Humberto Toledo
		system("cls");
		system("title C�lculo de Combust�vel Gasto");
		system("mode 56,20");
		system("color 0A");
		tempo = 0;
		vmedia = 0;
		printf("--------------------------------------------------------\n");
		printf("|       ##### C�LCULO DE COMBUST�VEL GASTO #####       |\n");
		printf("--------------------------------------------------------\n\n");
		printf("  Informe o tempo da viagem (em minutos): ");
		scanf("%d", &tempo);
		while (tempo <= 0)
		{
			printf("\n--------------------------------------------------------\n");
			printf("               TEMPO DEVE SER MAIOR QUE 0!");
			printf("\n--------------------------------------------------------\n");
			printf("\n  Informe o tempo da viagem (em minutos): ");
			scanf("%d", &tempo);
		}
		printf("\n  Informe a velocidade m�dia da viagem (em km/h): ");
		scanf("%f", &vmedia);
		while (vmedia <= 0)
		{
			printf("\n--------------------------------------------------------\n");
			printf("         VELOCIDADE M�DIA DEVE SER MAIOR QUE 0!");
			printf("\n--------------------------------------------------------\n");
			printf("\n  Informe a velocidade m�dia da viagem (em km/h): ");
			scanf("%f", &vmedia);
		}
		distancia = tempo * vmedia;
		litros = distancia / KMLITRO;
		printf("\n--------------------------------------------------------\n");
		printf("|                ##### RESULTADOS #####                |\n");
		printf("--------------------------------------------------------\n");
		printf("| Velocidade M�dia: %.1f km/h\n", vmedia);
		printf("| Tempo de viagem: %d minutos\n", tempo);
		printf("| Distancia Percorrida: %.1f km\n", distancia/60);
		printf("| Litros de combust�vel usados: %.1f litros\n", litros);
		printf("--------------------------------------------------------\n\n");
		printf("Deseja calcular novamente? [S]im ou [N]�o: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
