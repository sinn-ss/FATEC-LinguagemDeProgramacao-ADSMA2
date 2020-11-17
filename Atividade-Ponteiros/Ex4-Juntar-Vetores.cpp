// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE PONTEIROS - Entrega dia 19/11/2020
// Exerc�cio 4
// Neste exerc�cio deve se usar vetores din�micos com tamanhos nA e nB fornecidos pelo usu�rio.
// Escreva um programa que preencha com n�meros inteiros dois vetores denominados A e B com
// diferentes tamanhos nA e nB , respectivamente. Em seguida o programa deve juntar (como mostrado
// abaixo) os dois vetores em um �nico vetor com o tamanho nA+nB . Exibir na tela o vetor resultante.

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

    // Alocando espa�o para os vetores na mem�ria
    A = (int *) malloc(nA * sizeof(int));
    B = (int *) malloc(nB * sizeof(int));
    vetor_unido = (int *) malloc(nTotal * sizeof(int));

    // Verificando se houve falha na aloca��o de mem�ria
    if (A == NULL || B == NULL || vetor_unido == NULL)
    {
        printf("Falha na aloca��o de mem�ria!\n");
        system("PAUSE");
        exit(1);
    }

    // Preenchendo os vetores A e B com n�meros inteiros
    // O preenchimento foi feito de forma rand�mica com valores entre 0 e 100, pois o enunciado
    // n�o especifica se os valores devem ser preenchidos via teclado ou n�o, ele pede apenas
    // que o programa preencha os vetores com n�meros inteiros, conforme pode ser lido no
    // in�cio deste c�digo. O enunciado foi copiado do PDF que cont�m os exerc�cios na atividade
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
    printf("\n  Vetor A com %d posi��es: \n", nA);
    printf("  A: \n  |");
    for (contador = 0; contador < nA; contador++)
    {
        printf(" %d |", A[contador]);
    }
    printf("\n");

    // Exibindo o B
    printf("\n  Vetor B com %d posi��es: \n", nB);
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
    printf("\n  Vetor Unido com %d posi��es: \n", nTotal);
    printf("\n  Vetor Unido: \n  |");
    for (contador = 0; contador < nTotal; contador++)
    {
        printf(" %d |", vetor_unido[contador]);
    }
    printf("\n\n");

    // Liberando o espa�o dos vetores
    free(A);
    free(B);
    free(vetor_unido);

    printf("-----------------------------------------------------------------\n");
    system("PAUSE");
}
