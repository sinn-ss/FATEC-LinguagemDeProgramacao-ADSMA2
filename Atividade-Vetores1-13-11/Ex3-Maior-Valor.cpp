// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE VETORES1 - Entrega dia 13/11/2020
// Exerc�cio 3
// Receber via teclado 4 valores inteiros de um vetor A. Ap�s a leitura o programa deve encontrar e
// imprimir o maior valor armazenado no vetor

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int x[4], contador, maior = -2147483648; // Vari�vel inicializada com o menor valor poss�vel para um n�mero do tipo int.
	system("cls");
	system("title Encontrar Maior Valor");
	system("mode 65,30");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                    ##### MAIOR VALOR #####                    |\n");
	printf("-----------------------------------------------------------------\n\n");
    for (contador = 0; contador < 4; contador++)
    {
        printf("  Informe o valor de X[%d]: ", contador);
        scanf("%d", &x[contador]);
        if (x[contador] > maior)
        {
            maior = x[contador];
        }
    }
    printf("\n");
    printf("-----------------------------------------------------------------\n");
	printf("|                     ##### RESULTADO #####                     |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf("  O maior valor do vetor � %d.\n\n", maior);
    printf("-----------------------------------------------------------------\n");
    system("PAUSE");
}
