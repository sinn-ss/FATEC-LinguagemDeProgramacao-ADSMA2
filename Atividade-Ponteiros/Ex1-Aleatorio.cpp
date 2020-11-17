// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE PONTEIROS - Entrega dia 19/11/2020
// Exerc�cio 1
// Escreva um programa que leia um n�mero inteiro n, aloque mem�ria para um vetor din�mico com
// tamanho n e o preencha valores inteiros gerados aleatoriamente entre 0 e 50. Exiba na tela o
// vetor gerado

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int *vetor, contador, n;
	system("cls");
	system("title Vetor aleat�rio");
	system("mode 65,30");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                  ##### VETOR ALEAT�RIO #####                  |\n");
	printf("-----------------------------------------------------------------\n\n");

    // Lendo a quantidade de elementos do vetor
    printf("Informe a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    // Alocando espa�o do vetor na mem�ria
    vetor = (int *) malloc(n * sizeof(int));

    // Verificando se houve falha na aloca��o de mem�ria
    if (vetor == NULL)
    {
        printf("Falha na aloca��o de mem�ria!\n");
        system("PAUSE");
        exit(1);
    }

    // Atribuindo valores aleat�rios de 1 a 50 ao vetor
    srand(time(NULL));
    for (contador = 0; contador < n; contador++)
    {
        vetor[contador] = rand() % 50 + 1;
    }

    printf("\n");
    printf("-----------------------------------------------------------------\n");
	printf("|                  ##### EXIBI��O DO VETOR #####                |\n");
	printf("-----------------------------------------------------------------\n\n");

    // Exibindo o vetor
    for (contador = 0; contador < n; contador++)
    {
        printf("  VETOR[%d]: %d\n", contador, vetor[contador]);
    }

    // Liberando a mem�ria do vetor
    free(vetor);

    printf("-----------------------------------------------------------------\n");
    system("PAUSE");
}
