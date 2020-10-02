// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 3
// 2. Construa um projeto que mostra o preço de um produto e sua procedência a partir de seu preço e código de origem. Caso o código não seja
// nenhum dos especificados, o produto é importado.
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
			printf("Preço do produto 1: R$ 100.00\n");
			printf("A origem do produto é A.\n\n");
		break;
		
		case 2:
			printf("Preço do produto 2: R$ 200.00\n");
			printf("A origem do produto é B.\n\n");
		break;
		
		case 3:
			printf("Preço do produto 3: R$ 300.00\n");
			printf("A origem do produto é C.\n\n");
		break;
		
		case 4:
			printf("Preço do produto 4: R$ 400.00\n");
			printf("A origem do produto é D.\n\n");
		break;
		
		case 5:		
		case 6:
			printf("Preço do produto 6: R$ 600.00\n");
			printf("A origem do produto é E.\n\n");
		break;
		
		default:
			printf("Preço do produto %d: NÃO CADASTRADO\n", codinformado);
			printf("O produto é importado.\n\n");			
	}
	
	system("PAUSE");
}
