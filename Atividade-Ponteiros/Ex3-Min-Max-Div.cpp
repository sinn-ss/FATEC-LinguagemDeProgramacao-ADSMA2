// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE PONTEIROS - Entrega dia 19/11/2020
// Exercício 3
// Escreva um programa que leia dois números inteiros Min e Max. Obrigatoriamente, Min deve ser no
// mínimo 1 e Max deve ser maior que Min. Em seguida leia um valor inteiro em A e carregue um vetor
// dinâmico com todos os valores situados entre Min e Max que sejam divisíveis por A. Ao final mostre
// o vetor na tela.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int *vetor, contador, contador2, min, max, elementos, a;
	system("cls");
	system("title Alocação Dinâmica e Divisibilidade");
	system("mode 65,30");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|         ##### ALOCAÇÃO DINÂMICA E DIVISIBILIDADE #####        |\n");
	printf("-----------------------------------------------------------------\n\n");

    // Leitura do valor mínimo com validação
    printf("  Informe um valor mínimo (deve ser maior que 1): ");
    scanf("%d", &min);
    while (min < 1)
    {
        printf("-----------------------------------------------------------------\n");
        printf("  Valor mínimo deve ser maior do que 1!\n");
        printf("-----------------------------------------------------------------\n");
        printf("  Informe um valor mínimo: ");
        scanf("%d", &min);
    }

    // Leitura do valor máximo com validação
    printf("  Informe um valor máximo (deve ser maior que o valor mínimo): ");
    scanf("%d", &max);
    while (max < min)
    {
        printf("-----------------------------------------------------------------\n");
        printf("  Valor máximo deve ser maior do que o valor mínimo!\n");
        printf("-----------------------------------------------------------------\n");
        printf("  Informe um valor máximo: ");
        scanf("%d", &max);
    }
    
    // Leitura do valor A
    printf("  Informe um valor para A: ");
    scanf("%d", &a);

    // Identificando os valores divisíveis por A e a quantidade de elementos do vetor
    elementos = 0;
    for (contador = min; contador <= max; contador++)
    {
        if (contador % a == 0)
        {
            elementos++;
        }
    }

    // Alocando a memória para o vetor receber os números divisíveis por a
    vetor = (int *) malloc(elementos * sizeof(int));
    
    // Verificando se houve falha na alocação de memória
    if (vetor == NULL)
    {
        printf("Falha na alocação de memória!\n");
        system("PAUSE");
        exit(1);
    }

    // Preenchendo o vetor
    contador2 = 0;
    for (contador = min; contador <= max; contador++)
    {
        if (contador % a == 0)
        {
            vetor[contador2] = contador;
            contador2++;
        }
    }

    printf("\n");
    printf("-----------------------------------------------------------------\n");
	printf("|                  ##### EXIBIÇÃO DO VETOR #####                |\n");
	printf("-----------------------------------------------------------------\n\n");
    
    // Exibindo o vetor
    printf("  Entre o mínimo %d e o máximo %d, os valores divisíveis por A = %d são:\n\n", min, max, a);
    for (contador = 0; contador < elementos; contador++)
    {
        printf("  [%d]: %d\n", contador, vetor[contador]);
    }

    // Liberando a memória do vetor
    free(vetor);
    printf("-----------------------------------------------------------------\n");
    system("PAUSE");
}
