// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE VETORES1 - Entrega dia 13/11/2020
// Exercício 1
// Receber via teclado 5 valores inteiros de um vetor X em seguida exiba os valores do vetor X e
// um segundo vetor Y contem os elementos de X de trás para frente

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int x[5], y[5], contador, aux = 4;
	system("cls");
	system("title Inversão de Vetores");
	system("mode 65,30");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                ##### INVERSÃO DE VETORES #####                |\n");
	printf("-----------------------------------------------------------------\n\n");
    for (contador = 0; contador < 5; contador++)
    {
        printf("  Informe o valor de X[%d]: ", contador);
        scanf("%d", &x[contador]);
        y[aux] = x[contador];
        aux--;
    }
    printf("\n");
    printf("-----------------------------------------------------------------\n");
	printf("|                      ##### INVERSÃO #####                     |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf("VETOR ORIGINAL: \n\n");
    for (contador = 0; contador < 5; contador++)
    {
        printf("  X[%d]: %d\n", contador, x[contador]);
    }
    printf("\nVETOR INVERTIDO: \n\n");
    for (contador = 0; contador < 5; contador++)
    {
        printf("  Y[%d]: %d\n", contador, y[contador]);
    }
    printf("-----------------------------------------------------------------\n");
    system("PAUSE");
}
