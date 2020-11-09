// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE VETORES1 - Entrega dia 13/11/2020
// Exercício 2
// Receber via teclado 5 valores inteiros de um vetor X, em seguida alterar o vetor multiplicando os
// pares por 3 e somando 1 aos números impares. Mostrar o vetor de entrada e o vetor alterado com o
// nome de Y.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int x[5], y[5], contador;
	system("cls");
	system("title Operações com Vetores");
	system("mode 65,30");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|               ##### OPERAÇÕES COM VETORES #####               |\n");
	printf("-----------------------------------------------------------------\n\n");
    for (contador = 0; contador < 5; contador++)
    {
        printf("  Informe o valor de X[%d]: ", contador);
        scanf("%d", &x[contador]);
        if (x[contador] % 2 == 0)
        {
            y[contador] = x[contador] * 3;
        }
        else
        {
            y[contador] = x[contador] + 1;
        }
    }
    printf("\n");
    printf("-----------------------------------------------------------------\n");
	printf("|                     ##### OPERAÇÕES #####                     |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf(" VETOR ORIGINAL: \n\n");
    for (contador = 0; contador < 5; contador++)
    {
        printf("  X[%d]: %d\n", contador, x[contador]);
    }
    printf("\n VETOR ALTERADO: \n\n");
    for (contador = 0; contador < 5; contador++)
    {
        printf("  Y[%d]: %d\n", contador, y[contador]);
    }
    printf("-----------------------------------------------------------------\n");
    system("PAUSE");
}
