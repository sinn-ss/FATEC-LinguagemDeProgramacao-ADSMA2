// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE VETORES1 - Entrega dia 13/11/2020
// Exercício 6
// Criar um vetor, via teclado, com 6 números inteiros. Mostrar o vetor e informar quantos números
// são maior que 10. Imprimir a soma destes números e a somar todos os números.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int vetor[6], contador, maiores_10 = 0, soma_maiores = 0, soma_total = 0;
	system("cls");
	system("title Maiores que 10");
	system("mode 65,30");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                   ##### MAIORES QUE 10 #####                  |\n");
	printf("-----------------------------------------------------------------\n\n");
    for (contador = 0; contador < 6; contador++)
    {
        printf("  Informe o valor de Vetor[%d]: ", contador);
        scanf("%d", &vetor[contador]);
        if (vetor[contador] > 10)
        {
            maiores_10++;
            soma_maiores = soma_maiores + vetor[contador];
        }
        soma_total = soma_total + vetor[contador];
    }
    printf("\n  DADOS DO VETOR:\n\n");
    for (contador = 0; contador < 6; contador++)
    {
        printf("    Vetor[%d]: %d \n", contador, vetor[contador]);
    }
    printf("\n");
    printf("-----------------------------------------------------------------\n");
	printf("|                     ##### RESULTADOS #####                    |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf("  No vetor, há %d números maiores do que 10.\n\n", maiores_10);
    printf("  A soma dos números maiores que 10 é igual a %d. \n\n", soma_maiores);
    printf("  A soma de todos os números do vetor é igual a %d. \n", soma_total);
    printf("\n-----------------------------------------------------------------\n");
    system("PAUSE");
}
