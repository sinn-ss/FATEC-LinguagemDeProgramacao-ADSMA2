// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE PONTEIROS - Entrega dia 19/11/2020
// Exercício 1
// Escreva um programa que leia um número inteiro n, aloque memória para um vetor dinâmico com
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
	system("title Vetor aleatório");
	system("mode 65,30");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                  ##### VETOR ALEATÓRIO #####                  |\n");
	printf("-----------------------------------------------------------------\n\n");

    // Lendo a quantidade de elementos do vetor
    printf("Informe a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    // Alocando espaço do vetor na memória
    vetor = (int *) malloc(n * sizeof(int));

    // Verificando se houve falha na alocação de memória
    if (vetor == NULL)
    {
        printf("Falha na alocação de memória!\n");
        system("PAUSE");
        exit(1);
    }

    // Atribuindo valores aleatórios de 1 a 50 ao vetor
    srand(time(NULL));
    for (contador = 0; contador < n; contador++)
    {
        vetor[contador] = rand() % 50 + 1;
    }

    printf("\n");
    printf("-----------------------------------------------------------------\n");
	printf("|                  ##### EXIBIÇÃO DO VETOR #####                |\n");
	printf("-----------------------------------------------------------------\n\n");

    // Exibindo o vetor
    for (contador = 0; contador < n; contador++)
    {
        printf("  VETOR[%d]: %d\n", contador, vetor[contador]);
    }

    // Liberando a memória do vetor
    free(vetor);

    printf("-----------------------------------------------------------------\n");
    system("PAUSE");
}
