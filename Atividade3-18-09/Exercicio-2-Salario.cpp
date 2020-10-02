// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 3 - Entrega dia 18-09-2020
// Exerc�cio 2
// Fa�a um algoritmo que:
// a) Obtenha o valor para a vari�vel HT (horas trabalhadas no m�s);
// b) Obtenha o valor para a vari�vel VH (valor hora trabalhada):
// c) Obtenha o valor para a vari�vel PD (percentual de desconto);
// d) Calcule o sal�rio bruto => SB = HT * VH;
// e) Calcule o total de desconto => TD = (PD/100)*SB;
// f) Calcule o sal�rio l�quido => SL = SB � TD;
// g) Apresente os valores de: Horas trabalhadas, Sal�rio Bruto, Desconto, Sal�rio L�quido

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
		// Os comandos entre aspas dentro do comando system s�o c�digos em Batch (Processamento em Lote),
		// que aprendemos na mat�ria de Sistemas de Informa��o, com o prof. Humberto Toledo
		system("cls");
		system("title C�lculo de Sal�rio");
		system("mode 56,25");
		system("color 0A");
		printf("--------------------------------------------------------\n");
		printf("|             ##### C�LCULO DE SAL�RIO #####           |\n");
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
		printf("|  Sal�rio Bruto: %.2f\n", salbruto);
		printf("|  Desconto: %.2f\n", totaldesconto);
		printf("|  Sal�rio L�quido: %.2f\n", salliquido);
		printf("--------------------------------------------------------\n\n");
		printf("Deseja calcular novo sal�rio? [S]im ou [N]�o: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
