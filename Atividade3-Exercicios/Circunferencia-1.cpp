#include <stdio.h>
#include <stdlib.h> // Permite usar a fun���o system("PAUSE")
#include <conio.h> // Permite usar a fun��o getch();
#include <locale.h>
#include <math.h>
#define PI 3.14159

	//ALGORITMO PERIMETRO_AREA
	//Calcula o per�metro e a area de uma circunfer�ncia
	// de raio R (fornecido pelo usuario)
	// Definir variaveisintRaio; float Perim, Area, PI; PI = 3.14159;
	// Obter Raio da circunferenciaEscreva("Entre com o valor do raio:");Leia(Raio);
	// Calcular Perimetrodo Circulo Perim = 2 * PI * Raio;
	// Calcular Areada CircunferenciaArea= PI * Raio ** 2;
	// Exibir ResultadosEscreva("O perimetroda circunferenciade raio", Raio, "eh", Perim);Escreva("e a areaeh ",Area);
	// Terminar Programa FIM_ALGORITMO PERIMETRO_AREA

int main()
{
	int raio;
	float perim, area;
	setlocale(LC_ALL, "");
	
	printf("########## CALCULAR �REA E PR�METRO DA CIRCUNFER�NCIA ##########\n\n");
	printf("Informe o valor do raio: ");
	scanf("%d", &raio);
	perim = 2*PI*raio;
	area = pow((PI*raio),2);
	printf("\n\n");
	printf("O per�metro da circunfer�ncia � %.2f.\n", perim);
	printf("A �rea da circunfer�ncia � %.2f.\n\n", area);
	getch();
	system("PAUSE");	
}
