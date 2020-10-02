// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 3 - Entrega dia 18-09-2020
// Exercício 4
// Faça um algoritmo que calcule a quantidade de litros de combustível gasta em uma
// viagem, utilizando um automóvel que faz 12Km por litro. Para obter o cálculo, o
// usuário deve fornecer o tempo gasto na viagem e a velocidade média durante ela.
// Desta forma, será possível obter a distância percorrida com a fórmula:
// distancia = tempo *velocidade. Tendo o valor da distância, basta calcular a
// quantidade de litros de combustível utilizada na viagem com a fórmula:
// litros_usados = distancia / 12. O programa deve apresentar os valores da
// velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade
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
		// Os comandos entre aspas dentro do comando system são códigos em Batch (Processamento em Lote),
		// que aprendemos na matéria de Sistemas de Informação, com o prof. Humberto Toledo
		system("cls");
		system("title Cálculo de Combustível Gasto");
		system("mode 56,20");
		system("color 0A");
		tempo = 0;
		vmedia = 0;
		printf("--------------------------------------------------------\n");
		printf("|       ##### CÁLCULO DE COMBUSTÍVEL GASTO #####       |\n");
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
		printf("\n  Informe a velocidade média da viagem (em km/h): ");
		scanf("%f", &vmedia);
		while (vmedia <= 0)
		{
			printf("\n--------------------------------------------------------\n");
			printf("         VELOCIDADE MÉDIA DEVE SER MAIOR QUE 0!");
			printf("\n--------------------------------------------------------\n");
			printf("\n  Informe a velocidade média da viagem (em km/h): ");
			scanf("%f", &vmedia);
		}
		distancia = tempo * vmedia;
		litros = distancia / KMLITRO;
		printf("\n--------------------------------------------------------\n");
		printf("|                ##### RESULTADOS #####                |\n");
		printf("--------------------------------------------------------\n");
		printf("| Velocidade Média: %.1f km/h\n", vmedia);
		printf("| Tempo de viagem: %d minutos\n", tempo);
		printf("| Distancia Percorrida: %.1f km\n", distancia/60);
		printf("| Litros de combustível usados: %.1f litros\n", litros);
		printf("--------------------------------------------------------\n\n");
		printf("Deseja calcular novamente? [S]im ou [N]ão: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
