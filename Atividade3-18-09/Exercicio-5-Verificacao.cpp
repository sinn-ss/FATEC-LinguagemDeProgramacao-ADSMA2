// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 3 - Entrega dia 18-09-2020
// Exercício 5
// Sobre expressões, o que é impresso pelo programa abaixo? Faça a verificação
// também manuscrito.

#include <stdio.h>
int main()
{
	int score = 5;
	printf("%d", 5 + 10 * 5 % 6);
	// A expressão "5 + 10 * 5 % 6" imprime 7. Seguindo as regras matemáticas, primeiro efetuamos a multiplicação:
	// 10 * 5 = 50
	// Em seguida, realizamos a operação de módulo (%):
	// 50 % 6 = 2 (6 * 8 = 48, e 50 - 48 = 2)
	// Após isso, realizamos a adição:
	// 5 + 2 = 7

	printf("%d", 10 / 4);
	// A expressão 10/4 está sendo impressa por %d, e %d exibe variáveis do tipo int (inteiras).
	// Apesar do resultado matemático da divisão de 10 por 4 resultar em 2,5, o %d irá mostrar apenas a parte inteira desse valor.
	// Sendo assim, essa expresão imprime 2.

	printf("%f", 10.0 / 4.0);
	// A expressão 10.0 / 4.0 está sendo impressa por %f, e %f exibe variáveis do tipo float (reais).
	// O resultado matemático da divisão de 10.0 por 4.0 resulta em 2,5.
	// Como não especificamos uma quantidade de casas decimais a serem exibidas (por exemplo, .2f para exibir 2 casas decimais),
	// o programa imprime 2.500000

	printf("%c", 'A' + 1);
	// A expressão 'A' + 1 soma 1 a um elemento do tipo caractere, representaro por %c. Sendo assim, como a linguagem C usa a tabela ASCII
	// para lidar com os caracteres e letras em geral, ele irá somar +1 ao valor do caractere 'A', imprimindo o caractere B, pois em
	// ASCII, o caractere 'A' corresponde ao valor 65 (decimal) e o caractere 'B' corresponde ao valor 66 (decimal).

	printf("%d", score + (score == 0));
	// A expressão "score + (score == 0)" imprime o valor de score (setado para 5 na declaração da variável). Logo, imprime 5.
	// Como o operador == é um operador de comparação, e não de atribuição, seria o mesmo que pedir pra somar o valor atual da variável
	// a uma pergunta sobre o valor da mesma, como:
	// "score + (score é igual a 0?)"
	// O retorno falado dessa expressão seria "5 + (falso)"
	// Como o valor está sendo impresso por %d, que é o valor inteiro, essa expressã imprime 5, que é a parte inteira do resultado.

	// Como não estamos pulando linha com o /n na hora de imprimir, e nem dando espaço, o retorno de todas as expressões é:
	// 722.500000B5
}
