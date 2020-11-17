// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE PONTEIROS - Entrega dia 19/11/2020
// Exercício 5
// 5. Escreva um programa que leia um vetor com N números inteiros, onde N é um número inteiro
// previamente digitado pelo usuário. O programa não deve aceitar um número digitado que já
// esteja inserido no vetor, sendo que quando esta situação ocorrer uma mensagem deve ser dada
// ao usuário. Por fim exibir na tela a lista resultante.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int *vetor, contador, contador2, n;
	system("cls");
	system("title Vetor Sem Repetição");
	system("mode 65,30");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|                ##### VETOR SEM REPETIÇÃO #####                |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf("Informe a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    vetor = (int *) malloc(n * sizeof(int));
    if (vetor == NULL)
    {
        printf("Falha na alocação de memória!\n");
        system("PAUSE");
        exit(1);
    }

    // Preenchendo o vetor via teclado
    for (contador = 0; contador < n; contador++)
    {
        printf("-----------------------------------------------------------------\n");
        printf("  Informe o valor para vetor[%d]: ", contador);
        scanf("%d", &vetor[contador]);

        // Verificando se o valor já existe no vetor
        contador2 = 0;
        while (contador2 <= contador)
        {   
            // Se existir, avisa que não pode repetir e refaz a leitura
            if ((vetor[contador] == vetor[contador2] && contador != contador2))
            {
                printf("-----------------------------------------------------------------\n");
                printf("  Sem repetições no vetor!\n");
                printf("-----------------------------------------------------------------\n");
                printf("  Informe novo valor para vetor[%d]: ", contador);
                scanf("%d", &vetor[contador]);
                // Reiniciando a verificação a partir do elemento 0
                contador2 = 0;
            }
            // Se não existir, segue a verificação
            else
            {
                contador2++;
            }
            // Após verificar, segue para a leitura do próximo número até n
        }
    }
    printf("\n");
    printf("-----------------------------------------------------------------\n");
	printf("|                  ##### EXIBIÇÃO DO VETOR #####                |\n");
	printf("-----------------------------------------------------------------\n\n");

    // Exibindo o vetor
    for (contador = 0; contador < n; contador++)
    {
        printf("  vetor[%d]: %d\n", contador, vetor[contador]);
    }

    // Liberando a memória do vetor
    free(vetor);
    printf("-----------------------------------------------------------------\n");
    system("PAUSE");
}
