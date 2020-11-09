// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE VETORES1 - Entrega dia 13/11/2020
// Exerc�cio 7
// Criar um vetor, via teclado, com 5 n�meros inteiros. Exibir o vetor, calcular a m�dia do vetor.
// Mostrar quantos n�meros s�o m�ltiplos de 3. Quantos n�meros s�o maiores que 3 e menores que 10.
// Qual o maior n�mero do vetor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int vetor[5], contador, soma = 0, multiplos_3 = 0, maior_3_menor_10 = 0, maior_numero = -2147483648;
    float media;
	system("cls");
	system("title Opera��es com Vetores");
	system("mode 65,35");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|               ##### OPERA��ES COM VETORES #####               |\n");
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
	printf("|                     ##### OPERA��ES #####                     |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf("  No vetor: \n\n");
    printf("    A m�dia de todos os elementos equivale a %.2f;\n", media);
    printf("    %d n�meros s�o m�ltiplos de 3;\n", multiplos_3);
    printf("    %d n�meros s�o maiores que 3 e menores que 10;\n", maior_3_menor_10);
    printf("    O maior n�mero do vetor � %d.\n\n", maior_numero);
    printf("-----------------------------------------------------------------\n");
    system("PAUSE");
}
