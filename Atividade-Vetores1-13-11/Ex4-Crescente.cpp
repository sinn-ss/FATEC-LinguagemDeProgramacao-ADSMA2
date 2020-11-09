// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE VETORES1 - Entrega dia 13/11/2020
// Exercício 4
// Receber via teclado 5 valores inteiros quaisquer de um vetor A. Após a leitura o programa deve
// copiar para um vetor B os elementos de A em ordem crescente

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int a[5], b[5], contador, contador2, aux;
	system("cls");
	system("title Ordem Crescente");
	system("mode 65,30");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                  ##### ORDEM CRESCENTE #####                  |\n");
	printf("-----------------------------------------------------------------\n\n");
    for (contador = 0; contador < 5; contador++)
    {
        printf("  Informe o valor de A[%d]: ", contador);
        scanf("%d", &a[contador]);
        b[contador] = a[contador];
    }
    for (contador = 0; contador < 5; contador++)
    {
        for (contador2 = 0; contador2 < 5; contador2++)
        {
            if (b[contador] < b[contador2])
            {
                aux = b[contador];
                b[contador] = b[contador2];
                b[contador2] = aux;
            }
        }
    }
    printf("\n");
    printf("-----------------------------------------------------------------\n");
	printf("|                     ##### RESULTADO #####                     |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf(" VETOR ORIGINAL: \n\n");
    for (contador = 0; contador < 5; contador++)
    {
        printf("  X[%d]: %d\n", contador, a[contador]);
    }
    printf("\n VETOR ORDENADO: \n\n");
    for (contador = 0; contador < 5; contador++)
    {
        printf("  Y[%d]: %d\n", contador, b[contador]);
    }
    printf("-----------------------------------------------------------------\n");
    system("PAUSE");
}
