// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE PONTEIROS - Entrega dia 19/11/2020
// Exerc�cio 5
// 5. Escreva um programa que leia um vetor com N n�meros inteiros, onde N � um n�mero inteiro
// previamente digitado pelo usu�rio. O programa n�o deve aceitar um n�mero digitado que j�
// esteja inserido no vetor, sendo que quando esta situa��o ocorrer uma mensagem deve ser dada
// ao usu�rio. Por fim exibir na tela a lista resultante.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int *vetor, contador, contador2, n;
	system("cls");
	system("title Vetor Sem Repeti��o");
	system("mode 65,30");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                ##### VETOR SEM REPETI��O #####                |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf("Informe a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    vetor = (int *) malloc(n * sizeof(int));
    if (vetor == NULL)
    {
        printf("Falha na aloca��o de mem�ria!\n");
        system("PAUSE");
        exit(1);
    }

    // Preenchendo o vetor via teclado
    for (contador = 0; contador < n; contador++)
    {
        printf("-----------------------------------------------------------------\n");
        printf("  Informe o valor para vetor[%d]: ", contador);
        scanf("%d", &vetor[contador]);

        // Verificando se o valor j� existe no vetor
        contador2 = 0;
        while (contador2 <= contador)
        {   
            // Se existir, avisa que n�o pode repetir e refaz a leitura
            if ((vetor[contador] == vetor[contador2] && contador != contador2))
            {
                printf("-----------------------------------------------------------------\n");
                printf("  Sem repeti��es no vetor!\n");
                printf("-----------------------------------------------------------------\n");
                printf("  Informe novo valor para vetor[%d]: ", contador);
                scanf("%d", &vetor[contador]);
                // Reiniciando a verifica��o a partir do elemento 0
                contador2 = 0;
            }
            // Se n�o existir, segue a verifica��o
            else
            {
                contador2++;
            }
            // Ap�s verificar, segue para a leitura do pr�ximo n�mero at� n
        }
    }
    printf("\n");
    printf("-----------------------------------------------------------------\n");
	printf("|                  ##### EXIBI��O DO VETOR #####                |\n");
	printf("-----------------------------------------------------------------\n\n");

    // Exibindo o vetor
    for (contador = 0; contador < n; contador++)
    {
        printf("  vetor[%d]: %d\n", contador, vetor[contador]);
    }

    // Liberando a mem�ria do vetor
    free(vetor);
    printf("-----------------------------------------------------------------\n");
    system("PAUSE");
}
