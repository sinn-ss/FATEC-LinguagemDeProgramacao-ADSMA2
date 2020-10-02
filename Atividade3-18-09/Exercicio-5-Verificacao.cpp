// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 3 - Entrega dia 18-09-2020
// Exerc�cio 5
// Sobre express�es, o que � impresso pelo programa abaixo? Fa�a a verifica��o
// tamb�m manuscrito.

#include <stdio.h>
int main()
{
	int score = 5;
	printf("%d", 5 + 10 * 5 % 6);
	// A express�o "5 + 10 * 5 % 6" imprime 7. Seguindo as regras matem�ticas, primeiro efetuamos a multiplica��o:
	// 10 * 5 = 50
	// Em seguida, realizamos a opera��o de m�dulo (%):
	// 50 % 6 = 2 (6 * 8 = 48, e 50 - 48 = 2)
	// Ap�s isso, realizamos a adi��o:
	// 5 + 2 = 7

	printf("%d", 10 / 4);
	// A express�o 10/4 est� sendo impressa por %d, e %d exibe vari�veis do tipo int (inteiras).
	// Apesar do resultado matem�tico da divis�o de 10 por 4 resultar em 2,5, o %d ir� mostrar apenas a parte inteira desse valor.
	// Sendo assim, essa expres�o imprime 2.

	printf("%f", 10.0 / 4.0);
	// A express�o 10.0 / 4.0 est� sendo impressa por %f, e %f exibe vari�veis do tipo float (reais).
	// O resultado matem�tico da divis�o de 10.0 por 4.0 resulta em 2,5.
	// Como n�o especificamos uma quantidade de casas decimais a serem exibidas (por exemplo, .2f para exibir 2 casas decimais),
	// o programa imprime 2.500000

	printf("%c", 'A' + 1);
	// A express�o 'A' + 1 soma 1 a um elemento do tipo caractere, representaro por %c. Sendo assim, como a linguagem C usa a tabela ASCII
	// para lidar com os caracteres e letras em geral, ele ir� somar +1 ao valor do caractere 'A', imprimindo o caractere B, pois em
	// ASCII, o caractere 'A' corresponde ao valor 65 (decimal) e o caractere 'B' corresponde ao valor 66 (decimal).

	printf("%d", score + (score == 0));
	// A express�o "score + (score == 0)" imprime o valor de score (setado para 5 na declara��o da vari�vel). Logo, imprime 5.
	// Como o operador == � um operador de compara��o, e n�o de atribui��o, seria o mesmo que pedir pra somar o valor atual da vari�vel
	// a uma pergunta sobre o valor da mesma, como:
	// "score + (score � igual a 0?)"
	// O retorno falado dessa express�o seria "5 + (falso)"
	// Como o valor est� sendo impresso por %d, que � o valor inteiro, essa express� imprime 5, que � a parte inteira do resultado.

	// Como n�o estamos pulando linha com o /n na hora de imprimir, e nem dando espa�o, o retorno de todas as express�es �:
	// 722.500000B5
}
