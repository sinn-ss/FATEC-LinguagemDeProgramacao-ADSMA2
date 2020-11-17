// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE PONTEIROS - Entrega dia 19/11/2020
// Exerc�cio 3
// Escreva um programa que leia dois n�meros inteiros Min e Max. Obrigatoriamente, Min deve ser no
// m�nimo 1 e Max deve ser maior que Min. Em seguida leia um valor inteiro em A e carregue um vetor
// din�mico com todos os valores situados entre Min e Max que sejam divis�veis por A. Ao final mostre
// o vetor na tela.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int *vetor, contador, contador2, min, max, elementos, a;
	system("cls");
	system("title Aloca��o Din�mica e Divisibilidade");
	system("mode 65,30");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|         ##### ALOCA��O DIN�MICA E DIVISIBILIDADE #####        |\n");
	printf("-----------------------------------------------------------------\n\n");

    // Leitura do valor m�nimo com valida��o
    printf("  Informe um valor m�nimo (deve ser maior que 1): ");
    scanf("%d", &min);
    while (min < 1)
    {
        printf("-----------------------------------------------------------------\n");
        printf("  Valor m�nimo deve ser maior do que 1!\n");
        printf("-----------------------------------------------------------------\n");
        printf("  Informe um valor m�nimo: ");
        scanf("%d", &min);
    }

    // Leitura do valor m�ximo com valida��o
    printf("  Informe um valor m�ximo (deve ser maior que o valor m�nimo): ");
    scanf("%d", &max);
    while (max < min)
    {
        printf("-----------------------------------------------------------------\n");
        printf("  Valor m�ximo deve ser maior do que o valor m�nimo!\n");
        printf("-----------------------------------------------------------------\n");
        printf("  Informe um valor m�ximo: ");
        scanf("%d", &max);
    }
    
    // Leitura do valor A
    printf("  Informe um valor para A: ");
    scanf("%d", &a);

    // Identificando os valores divis�veis por A e a quantidade de elementos do vetor
    elementos = 0;
    for (contador = min; contador <= max; contador++)
    {
        if (contador % a == 0)
        {
            elementos++;
        }
    }

    // Alocando a mem�ria para o vetor receber os n�meros divis�veis por a
    vetor = (int *) malloc(elementos * sizeof(int));
    
    // Verificando se houve falha na aloca��o de mem�ria
    if (vetor == NULL)
    {
        printf("Falha na aloca��o de mem�ria!\n");
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
	printf("|                  ##### EXIBI��O DO VETOR #####                |\n");
	printf("-----------------------------------------------------------------\n\n");
    
    // Exibindo o vetor
    printf("  Entre o m�nimo %d e o m�ximo %d, os valores divis�veis por A = %d s�o:\n\n", min, max, a);
    for (contador = 0; contador < elementos; contador++)
    {
        printf("  [%d]: %d\n", contador, vetor[contador]);
    }

    // Liberando a mem�ria do vetor
    free(vetor);
    printf("-----------------------------------------------------------------\n");
    system("PAUSE");
}
