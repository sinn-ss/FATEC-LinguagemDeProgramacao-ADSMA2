// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE AVALIATIVA - Entrega dia 13/10/2020
// Exercício 8
// Ler um número inteiro e imprimir seus 4 sucessores e seus 4 antecessores.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int numero, contador;

    system("cls");
	system("title Sucessores e Antecessores");
	system("mode 70,20");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|             ##### SUCESSORES E ANTECESSORES #####             |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf("  Informe um número: ");
    scanf("%d", &numero);
    contador = numero;
    printf("\n");
    printf("-----------------------------------------------------------------\n");
    printf("|                          4 SUCESSORES                         |\n");
    printf("-----------------------------------------------------------------\n");
    while (contador < numero+4)
    {
        contador++;
        printf("  %d\n", contador);
    }
    printf("\n-----------------------------------------------------------------\n");
    printf("|                         4 ANTECESSORES                        |\n");
    printf("-----------------------------------------------------------------\n");
    contador = numero;
    while (contador > numero-4)
    {
        contador--;
        printf("  %d\n", contador);
    }
    printf("\n-----------------------------------------------------------------\n\n");
    system("PAUSE");
}