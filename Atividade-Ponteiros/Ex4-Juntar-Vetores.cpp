// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE PONTEIROS - Entrega dia 19/11/2020
// Exercício 4
// Neste exercício deve se usar vetores dinâmicos com tamanhos nA e nB fornecidos pelo usuário.
// Escreva um programa que preencha com números inteiros dois vetores denominados A e B com
// diferentes tamanhos nA e nB , respectivamente. Em seguida o programa deve juntar (como mostrado
// abaixo) os dois vetores em um único vetor com o tamanho nA+nB . Exibir na tela o vetor resultante.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int *A, *B, *vetor_unido, nA, nB, contador, contador2, nTotal;
	system("cls");
	system("title Unindo Vetores");
	system("mode 75,30");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                   ##### UNINDO VETORES #####                  |\n");
	printf("-----------------------------------------------------------------\n\n");

    // Lendo elementos do A
    printf("  Informe a quantidade de elementos do A: ");
    scanf("%d", &nA);

    // Lendo elementos do B
    printf("  Informe a quantidade de elementos do B: ");
    scanf("%d", &nB);

    // Obtendo o total de elementos do dois vetores
    nTotal = nA+nB;

    // Alocando espaço para os vetores na memória
    A = (int *) malloc(nA * sizeof(int));
    B = (int *) malloc(nB * sizeof(int));
    vetor_unido = (int *) malloc(nTotal * sizeof(int));

    // Verificando se houve falha na alocação de memória
    if (A == NULL || B == NULL || vetor_unido == NULL)
    {
        printf("Falha na alocação de memória!\n");
        system("PAUSE");
        exit(1);
    }

    // Preenchendo os vetores A e B com números inteiros
    // O preenchimento foi feito de forma randômica com valores entre 0 e 100, pois o enunciado
    // não especifica se os valores devem ser preenchidos via teclado ou não, ele pede apenas
    // que o programa preencha os vetores com números inteiros, conforme pode ser lido no
    // início deste código. O enunciado foi copiado do PDF que contém os exercícios na atividade
    // do Microsoft Teams.
    srand(time(NULL));
    for (contador = 0; contador < nA; contador++)
    {
        A[contador] = rand() % 100 + 1;
    }
    for (contador = 0; contador < nB; contador++)
    {
        B[contador] = rand() % 100 + 1;
    }

    // Exibindo o A
    printf("\n  Vetor A com %d posições: \n", nA);
    printf("  A: \n  |");
    for (contador = 0; contador < nA; contador++)
    {
        printf(" %d |", A[contador]);
    }
    printf("\n");

    // Exibindo o B
    printf("\n  Vetor B com %d posições: \n", nB);
    printf("  B: \n  |");
    for (contador = 0; contador < nB; contador++)
    {
        printf(" %d |", B[contador]);
    }
    printf("\n\n");

    printf("-----------------------------------------------------------------\n");
	printf("|                  ##### UNINDO OS VETORES #####                |\n");
	printf("-----------------------------------------------------------------\n\n");

    // Unindo os dois vetores
    contador2 = 0;
    for (contador = 0; contador < nA; contador++)
    {
        vetor_unido[contador] = A[contador];
    }
    for (contador; contador < nTotal; contador++)
    {
        vetor_unido[contador] = B[contador2];
        contador2++;
    }

    // Exibindo o vetor unido
    printf("\n  Vetor Unido com %d posições: \n", nTotal);
    printf("\n  Vetor Unido: \n  |");
    for (contador = 0; contador < nTotal; contador++)
    {
        printf(" %d |", vetor_unido[contador]);
    }
    printf("\n\n");

    // Liberando o espaço dos vetores
    free(A);
    free(B);
    free(vetor_unido);

    printf("-----------------------------------------------------------------\n");
    system("PAUSE");
}
