// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE AVALIATIVA - Entrega dia 13/10/2020
// Exerc�cio 5
// Escrever um programa em linguagem C que calcula o desvio padr�o e o coeficiente
// de varia��o de alguns dados. Considere a vari�ncia igual a 23,5 e a m�dia igual a 15.
// Para os valores dados a sa�da deve ser: D.P = 4,84 CV=32,32%

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define VARIANCIA 23.5
#define MEDIA 15

int main(void)
{
    setlocale(LC_ALL, "");
    float desvio_padrao, coef_variacao;

    system("cls");
	system("title Desvio Padr�o e CV");
	system("mode 70,20");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|          ##### DESVIO PADR�O E COEF. DE VARIA��O #####        |\n");
	printf("-----------------------------------------------------------------\n\n");
    desvio_padrao = sqrt(VARIANCIA);
    coef_variacao = (desvio_padrao/MEDIA)*100;
    printf("  Para Vari�ncia = %.2f, o desvio Padr�o � igual a %.2f.\n\n", VARIANCIA, desvio_padrao);
    printf("  Para m�dia = %d, o Coeficiente de Varia��o � igual a %.2f%%. \n\n", MEDIA, coef_variacao);
    system("PAUSE");
}    
