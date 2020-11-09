// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE VETORES1 - Entrega dia 13/11/2020
// Exercício 5
// Criar um vetor, via teclado, com 6 números inteiros, solicitar um número do teclado. Verificar se
// esse número existe no vetor. Se existir, imprimir em qual posição do vetor. Se não existir, imprimir
// uma mensagem que não existe.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int vetor[6], contador, contador2, buscar, posicao[6];
	system("cls");
	system("title Pesquisar Vetor");
	system("mode 65,30");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                  ##### PESQUISAR VETOR #####                  |\n");
	printf("-----------------------------------------------------------------\n\n");
    for (contador = 0; contador < 6; contador++)
    {
        printf("  Informe o valor de Vetor[%d]: ", contador);
        scanf("%d", &vetor[contador]);
        posicao[contador] = 3141592; //Atribuindo um número aleatório a todas as posições do vetor
    }
    printf("\n");
    printf("-----------------------------------------------------------------\n");
	printf("|                      ##### PESQUISA #####                     |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf("  Informe um valor para buscar no vetor: ");
    scanf("%d", &buscar);
    contador2 = 0;
    for (contador = 0; contador < 6; contador++)
    {
        if (buscar == vetor[contador])
        {
            posicao[contador2] = contador;
            contador2++;
        }
    }

    if (posicao[0] == 3141592)
    {
        printf("\n  O valor pesquisado %d não aparece em nenhuma posição do vetor.\n", buscar);
    }
    else
    {
        printf("\n  O valor pesquisado %d aparece no vetor nas posições:\n", buscar);
        for (contador = 0; contador < 6; contador++)
        {
            if (posicao[contador] != 3141592)
            {
                printf("    [%d] \n", posicao[contador]);
            }
        }
    }
    printf("\n-----------------------------------------------------------------\n");
    system("PAUSE");
}
