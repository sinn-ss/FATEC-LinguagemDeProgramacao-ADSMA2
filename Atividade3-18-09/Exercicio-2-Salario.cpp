// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 3 - Entrega dia 18-09-2020
// Exercício 2
// Faça um algoritmo que:
// a) Obtenha o valor para a variável HT (horas trabalhadas no mês);
// b) Obtenha o valor para a variável VH (valor hora trabalhada):
// c) Obtenha o valor para a variável PD (percentual de desconto);
// d) Calcule o salário bruto => SB = HT * VH;
// e) Calcule o total de desconto => TD = (PD/100)*SB;
// f) Calcule o salário líquido => SL = SB – TD;
// g) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário Líquido

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void)
{
	setlocale(LC_ALL, "");
	float horastrabalhadas, valorhora, percdesconto, totaldesconto, salbruto, salliquido;
	char resposta='s';

	do
	{
		// Os comandos entre aspas dentro do comando system são códigos em Batch (Processamento em Lote),
		// que aprendemos na matéria de Sistemas de Informação, com o prof. Humberto Toledo
		system("cls");
		system("title Cálculo de Salário");
		system("mode 56,25");
		system("color 0A");
		printf("--------------------------------------------------------\n");
		printf("|             ##### CÁLCULO DE SALÁRIO #####           |\n");
		printf("--------------------------------------------------------\n\n");
		printf("  Informe a quantidade de horas trabalhadas: ");
		scanf("%f", &horastrabalhadas);
		printf("\n  Informe o valor da hora trabalhada: ");
		scanf("%f", &valorhora);
		printf("\n  Informe o percentual de desconto: ");
		scanf("%f", &percdesconto);
		printf("\n--------------------------------------------------------\n\n");
		salbruto = horastrabalhadas * valorhora;
		totaldesconto = (percdesconto/100)*salbruto;
		salliquido = salbruto - totaldesconto;

		printf("--------------------------------------------------------\n");
		printf("|                ##### RESULTADOS #####                |\n");
		printf("--------------------------------------------------------\n");
		printf("|  Horas trabalhadas: %.2f\n", horastrabalhadas);
		printf("|  Salário Bruto: %.2f\n", salbruto);
		printf("|  Desconto: %.2f\n", totaldesconto);
		printf("|  Salário Líquido: %.2f\n", salliquido);
		printf("--------------------------------------------------------\n\n");
		printf("Deseja calcular novo salário? [S]im ou [N]ão: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
