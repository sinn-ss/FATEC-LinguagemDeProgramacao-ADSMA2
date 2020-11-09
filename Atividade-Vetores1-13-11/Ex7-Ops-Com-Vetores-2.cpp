// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE VETORES1 - Entrega dia 13/11/2020
// Exercício 7
// Criar um vetor, via teclado, com 5 números inteiros. Exibir o vetor, calcular a média do vetor.
// Mostrar quantos números são múltiplos de 3. Quantos números são maiores que 3 e menores que 10.
// Qual o maior número do vetor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int vetor[5], contador, soma = 0, multiplos_3 = 0, maior_3_menor_10 = 0, maior_numero = -2147483648;
    float media;
	system("cls");
	system("title Operações com Vetores");
	system("mode 65,35");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|               ##### OPERAÇÕES COM VETORES #####               |\n");
	printf("-----------------------------------------------------------------\n\n");
    for (contador = 0; contador < 5; contador++)
    {
        printf("  Informe o valor de Vetor[%d]: ", contador);
        scanf("%d", &vetor[contador]);
        soma = soma + vetor[contador];
        if (vetor[contador] % 3 == 0)
        {
            multiplos_3++;
        }
        if (vetor[contador] > 3 && vetor[contador] < 10)
        {
            maior_3_menor_10++;
        }
        if (vetor[contador] > maior_numero)
        {
            maior_numero = vetor[contador];
        }
    }
    printf("\n  DADOS DO VETOR:\n\n");
    for (contador = 0; contador < 5; contador++)
    {
        printf("    Vetor[%d]: %d \n", contador, vetor[contador]);
    }
    printf("\n");
    media = soma/5;
    printf("-----------------------------------------------------------------\n");
	printf("|                     ##### OPERAÇÕES #####                     |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf("  No vetor: \n\n");
    printf("    A média de todos os elementos equivale a %.2f;\n", media);
    printf("    %d números são múltiplos de 3;\n", multiplos_3);
    printf("    %d números são maiores que 3 e menores que 10;\n", maior_3_menor_10);
    printf("    O maior número do vetor é %d.\n\n", maior_numero);
    printf("-----------------------------------------------------------------\n");
    system("PAUSE");
}
