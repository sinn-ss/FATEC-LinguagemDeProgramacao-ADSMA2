// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE AVALIATIVA - Entrega dia 13/10/2020
// Exerc�cio 7
// Escrever um programa em linguagem C que leia c�digos inteiros 1, 2, 3, 4 e 5
// referente aos dias da semana (segunda, ter�a, quarta, quinta e sexta), caso o c�digo
// n�o seja nenhum dos especificados e o c�digo for 6 imprima �� final de semana,
// s�bado�, se for 7 imprima �� final de semana, domingo�.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int dia;

    system("cls");
	system("title Dias da Semana");
	system("mode 70,20");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                   ##### DIAS DA SEMANA #####                  |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf("  Informe o c�digo do dia: ");
    scanf("%d", &dia);
    printf("\n-----------------------------------------------------------------\n\n");
    switch (dia)
    {
        case 1:
            printf("  O c�digo 1 corresponde � segunda-feira.\n");
        break;

        case 2:
            printf("  O c�digo 2 corresponde � ter�a-feira.\n");
        break;

        case 3:
            printf("  O c�digo 3 corresponde � quarta-feira.\n");
        break;

        case 4:
            printf("  O c�digo 4 corresponde � quinta-feira.\n");
        break;

        case 5:
            printf("  O c�digo 5 corresponde � sexta-feira.\n");
        break;

        case 6:
            printf("  O c�digo 6 corresponde ao s�bado. � final de semana!\n");
        break;

        case 7:
            printf("  O c�digo 7 corresponde ao domingo. � final de semana!.\n");
        break;

        default:
            printf("  O c�digo especificado n�o corresponde a nenhum dia da semana ou final de semana!\n");
    }
    printf("\n-----------------------------------------------------------------\n\n");
    system("PAUSE");
}

