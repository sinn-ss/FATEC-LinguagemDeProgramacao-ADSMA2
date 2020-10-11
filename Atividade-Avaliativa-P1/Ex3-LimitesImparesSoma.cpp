// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE AVALIATIVA - Entrega dia 13/10/2020
// Exerc�cio 3
// Criar um algoritmo que leia os limites inferior e superior de um intervalo e imprimir
// todos os n�meros �mpares no intervalo aberto e seu somat�rio. Suponha que os
// dados digitados s�o para um intervalo crescente.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int minimo, maximo, contador, soma;

    system("cls");
	system("title Somar Intervalo de �mpares");
	system("mode 70,20");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|              ##### SOMAR INTERVALO DE �MPARES #####            |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf("  Informe o valor m�nimo do intervalo: ");
    scanf("%d", &minimo);
    do
    {
        printf("  Informe o valor m�ximo do intervalo: ");
        scanf("%d", &maximo);
    } while(maximo < minimo);
    printf("\n-----------------------------------------------------------------\n\n");
    printf("  Intervalo de %d a %d.\n", minimo, maximo);
    printf("\n-----------------------------------------------------------------\n\n");
    soma = 0;
    for (contador = minimo+1; contador < maximo; contador++)
    {
        if (contador % 2 != 0)
        {
            soma = soma + contador;
            printf("  O n�mero %d � �mpar!\n", contador);
        }
    }
    printf("\n-----------------------------------------------------------------\n\n");
    printf("  O valor da soma de todos os �mpares acima � %d.\n\n", soma);
    printf("-----------------------------------------------------------------\n\n");
    system("PAUSE");
}