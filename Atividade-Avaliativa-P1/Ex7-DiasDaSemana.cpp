// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE AVALIATIVA - Entrega dia 13/10/2020
// Exercício 7
// Escrever um programa em linguagem C que leia códigos inteiros 1, 2, 3, 4 e 5
// referente aos dias da semana (segunda, terça, quarta, quinta e sexta), caso o código
// não seja nenhum dos especificados e o código for 6 imprima “é final de semana,
// sábado”, se for 7 imprima “é final de semana, domingo”.

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
    printf("  Informe o código do dia: ");
    scanf("%d", &dia);
    printf("\n-----------------------------------------------------------------\n\n");
    switch (dia)
    {
        case 1:
            printf("  O código 1 corresponde à segunda-feira.\n");
        break;

        case 2:
            printf("  O código 2 corresponde à terça-feira.\n");
        break;

        case 3:
            printf("  O código 3 corresponde à quarta-feira.\n");
        break;

        case 4:
            printf("  O código 4 corresponde à quinta-feira.\n");
        break;

        case 5:
            printf("  O código 5 corresponde à sexta-feira.\n");
        break;

        case 6:
            printf("  O código 6 corresponde ao sábado. É final de semana!\n");
        break;

        case 7:
            printf("  O código 7 corresponde ao domingo. É final de semana!.\n");
        break;

        default:
            printf("  O código especificado não corresponde a nenhum dia da semana ou final de semana!\n");
    }
    printf("\n-----------------------------------------------------------------\n\n");
    system("PAUSE");
}

