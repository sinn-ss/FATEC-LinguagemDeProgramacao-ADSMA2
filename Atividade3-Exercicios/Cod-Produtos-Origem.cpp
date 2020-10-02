// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 3
// 2. Construa um projeto que mostra o pre�o de um produto e sua proced�ncia a partir de seu pre�o e c�digo de origem. Caso o c�digo n�o seja
// nenhum dos especificados, o produto � importado.
// Considere a tabela:
// CODIGO DE ORIGEM			PRODECENCIA
// 		1					Origem A
//		2					Origem B
//		3					Origem C
//		4					Origem D
// 	 5 ou 6					Origem E

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "");
	int codinformado;
	
	printf("Informe o codigo do produto: ");
	scanf("%d", &codinformado);
	printf("\n");
	
	switch(codinformado)
	{
		case 1:
			printf("Pre�o do produto 1: R$ 100.00\n");
			printf("A origem do produto � A.\n\n");
		break;
		
		case 2:
			printf("Pre�o do produto 2: R$ 200.00\n");
			printf("A origem do produto � B.\n\n");
		break;
		
		case 3:
			printf("Pre�o do produto 3: R$ 300.00\n");
			printf("A origem do produto � C.\n\n");
		break;
		
		case 4:
			printf("Pre�o do produto 4: R$ 400.00\n");
			printf("A origem do produto � D.\n\n");
		break;
		
		case 5:		
		case 6:
			printf("Pre�o do produto 6: R$ 600.00\n");
			printf("A origem do produto � E.\n\n");
		break;
		
		default:
			printf("Pre�o do produto %d: N�O CADASTRADO\n", codinformado);
			printf("O produto � importado.\n\n");			
	}
	
	system("PAUSE");
}
