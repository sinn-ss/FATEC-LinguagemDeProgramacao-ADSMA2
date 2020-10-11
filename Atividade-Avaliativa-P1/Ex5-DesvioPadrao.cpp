// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE AVALIATIVA - Entrega dia 13/10/2020
// Exercício 5
// Escrever um programa em linguagem C que calcula o desvio padrão e o coeficiente
// de variação de alguns dados. Considere a variância igual a 23,5 e a média igual a 15.
// Para os valores dados a saída deve ser: D.P = 4,84 CV=32,32%

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define variancia 23.5
#define media 15

int main(void)
{
    setlocale(LC_ALL, "");
    float desvio_padrao, coef_variacao;

    system("cls");
	system("title Desvio Padrão e CV");
	system("mode 70,20");
	system("color 0A");
	printf("-----------------------------------------------------------------\n");
	printf("|          ##### DESVIO PADRÃO E COEF. DE VARIAÇÃO #####        |\n");
	printf("-----------------------------------------------------------------\n\n");
    desvio_padrao = sqrt(variancia);
    coef_variacao = (desvio_padrao/media)*100;
    printf("  Para Variância = %.2f, o desvio Padrão é igual a %.2f.\n\n", variancia, desvio_padrao);
    printf("  Para média = %d, o Coeficiente de Variação é igual a %.2f%%. \n\n", media, coef_variacao);
    system("PAUSE");
}    
