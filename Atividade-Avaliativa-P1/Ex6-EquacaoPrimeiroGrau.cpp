// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE AVALIATIVA - Entrega dia 13/10/2020
// Exerc�cio 6
// Escrever um programa em linguagem C que calcula a raiz de uma equa��o do
// primeiro grau.
// Equa��o do primeiro grau: AX+B ? 2x+5=0?
// Raiz de uma equa��o do primeiro grau: x = -5/2 raiz x= - B/A

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    float termo_a, termo_b, raiz;

    system("cls");
	system("title Equa��o de Primeiro Grau");
	system("mode 70,20");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|               ##### EQUA��O DE PRIMEIRO GRAU #####            |\n");
	printf("-----------------------------------------------------------------\n\n");
    printf("  Informe o valor de a: ");
    scanf("%f", &termo_a);
    printf("\n  Informe o valor de b: ");
    scanf("%f", &termo_b);
    printf("\n-----------------------------------------------------------------\n\n");
    printf("  Equa��o do 1� grau:\n");
    printf("  %.0fx + %.0f = 0\n", termo_a, termo_b);
    printf("\n-----------------------------------------------------------------\n\n");
    raiz = -termo_b/termo_a;
    printf("  A raiz dessa equa��o � igual a %.2f.\n", raiz);
    printf("\n-----------------------------------------------------------------\n\n");
    system("PAUSE");
}