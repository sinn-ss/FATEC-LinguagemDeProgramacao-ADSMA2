// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE PONTEIROS - Entrega dia 19/11/2020
// Exerc�cio 2
// No programa anterior, ap�s exibir o vetor na tela, acrescente a leitura de um valor inteiro X
// e o programa deve informar se tal valor X est�, ou n�o est� presente no vetor e em qual posi��o.
// Se X estiver repetido, todas as posi��es devem ser informadas.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int *vetor, *busca, x, contador, contador2, n, aparicoes_x;
	system("cls");
	system("title Buscar Valor em Vetor");
	system("mode 65,30");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|               ##### BUSCAR VALOR EM VETOR #####               |\n");
	printf("-----------------------------------------------------------------\n\n");

    // Lendo a quantidade de elementos do vetor
    printf("Informe a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    // Alocando espa�o dos vetores na mem�ria
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
    for (contador = 0; contador < n; contador++)
    {
        printf("  VETOR[%d]: %d\n", contador, vetor[contador]);
    }

    printf("\n");
    printf("-----------------------------------------------------------------\n");
	printf("|                         ##### BUSCA #####                     |\n");
	printf("-----------------------------------------------------------------\n\n");

    // Lendo o valor buscado no vetor
    printf("  Informe um valor para a busca: ");
    scanf("%d", &x);

    // Determinando quantas vezes o valor de X aparece em vetor
    aparicoes_x = 0;
    for (contador = 0; contador < n; contador++)
    {
        if (vetor[contador] == x)
        {
            aparicoes_x++;
        }
    }

    // Se a quantidade de apari��es for maior que zero, executa o processamento
    // Caso aparicoes_x seja igual a 0, informa o usu�rio que o valor buscado n�o aparece no vetor!
    if (aparicoes_x > 0)
    {
        busca = (int *) malloc(aparicoes_x * sizeof(int));

        // Verificando por falhas na aloca��o de mem�ria no vetor de busca
        if (busca == NULL)
        {
            printf("Falha na aloca��o de mem�ria!\n");
            system("PAUSE");
            exit(1);
        }

        // Atribuindo as posi��es para o vetor de busca
        contador2 = 0;
        for (contador = 0; contador < n; contador++)
        {
            if (vetor[contador] == x)
            {
                busca[contador2] = contador;
                contador2++;
            }
        }

        // Exibe em quais posi��es o valor pesquisado aparece no vetor
        printf("\n  O valor pesquisado %d aparece %d vezes no vetor nas posi��es:\n", x, aparicoes_x);
        for (contador = 0; contador < aparicoes_x; contador++)
        {
            printf("    [%d] \n", busca[contador]);
        }
        // Libera o vetor de busca
        free(busca);
    }
    else
    {
        printf("\n  O valor pesquisado %d n�o aparece em nenhuma posi��o do vetor.\n", x);
    }
    
    // Liberando a mem�ria do vetor
    free(vetor);
    printf("-----------------------------------------------------------------\n");
    system("PAUSE");
}
