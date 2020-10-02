// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 3
// 1. Construa um projeto que resolva o problema. Pedro tem 1,50m de altura e cresce 2cm por ano. Carlos tem 1,10m e cresce 3cm.
// Este projeto mostra quantos anos serão necessários para que Carlos seja maior que Pedro.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int anos;
	float pedro = 1.5;
	float carlos = 1.1;
	
	printf("Pedro tem %.2f m e cresce 2 cm por ano.\n", pedro);
	printf("Carlos tem %.2f m e cresce 3 cm por ano.\n\n", carlos);
	
	while (pedro >= carlos)
	{
		pedro = pedro + 0.02;
		carlos = carlos + 0.03;
		anos = anos + 1;
	}
	
	printf("Carlos levará %d anos para ser mais alto que Pedro.\n\n", anos);
	system("PAUSE");
}
