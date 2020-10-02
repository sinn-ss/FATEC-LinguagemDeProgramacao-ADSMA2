// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 4 - Entrega dia 19-09-2020
// Exercício 4
// Escrever um programa em linguagem C que leia dois valores inteiros e
// independentemente da ordem em que foram entrados, eles devem ser impressos
// na ordem crescente, ou seja, se forem fornecidos 4 e 3, respectivamente,
// devem ser apresentados 3 e 4. O programa proposto necessita verificar se um
// dos valores é maior que o outro. Se for constatado que esta condição é
// verdadeira, o programa deve efetuar a troca dos valores entre as duas
// variáveis, para então apresentar os valores ordenados.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
  int menor, maior, troca;
  char resposta = 's';
  do
	{
		system("cls");
		system("title Ordenar por ordem crescente");
		system("mode 56,20");
		system("color 0A");
		printf("--------------------------------------------------------\n");
		printf("|        ##### ORDENAR POR ORDEM CRESCENTE #####       |\n");
		printf("--------------------------------------------------------\n\n");
		printf("  Digite um número inteiro: ");
		scanf("%d", &menor);
		printf("\n  Digite outro número inteiro: ");
		scanf("%d", &maior);
		printf("\n--------------------------------------------------------\n");
		printf("|                 ##### RESULTADO #####                |\n");
		printf("--------------------------------------------------------\n\n");
    if (menor > maior)
    {
      troca = menor;
      menor = maior;
      maior = troca;
    }
    printf("  Os números em ordem crescente são: | %d | %d |\n\n", menor, maior);
		printf("--------------------------------------------------------\n\n");
		printf("Deseja calcular novamente? [S]im ou [N]ão: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
