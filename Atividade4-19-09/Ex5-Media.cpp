// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 4 - Entrega dia 19-09-2020
// Exerc�cio 5
// Escrever um programa em linguagem C que fa�a a leitura de quatro valores
// num�ricos referentes a quatro notas bimestrais de um aluno, efetuar o
// c�lculo da m�dia e apresent�-la junto com uma das seguintes mensagens: caso
// o valor da m�dia seja maior ou igual a 5, apresentar "aluno aprovado";
// caso contr�rio, apresentar "aluno reprovado".

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
  int contador;
  float notas[4], soma, media;
  char resposta = 's'; // Vari�vel para verificar se quer executar o c�lculo novamente
  // Esse do ... while mant�m o programa em repeti��o at� que o usu�rio diga que n�o quer mais calcular nada
  do
	{
		system("cls"); // Limpa a tela
		system("title C�lculo de M�dia"); // T�tulo da janela
		system("mode 56,20"); // Tamanho da janela
		system("color 0A"); // Cor do fundo (0); Cor do texto (A)
		printf("--------------------------------------------------------\n");
		printf("|             ##### C�LCULO DE M�DIA #####             |\n");
		printf("--------------------------------------------------------\n\n");
    // Coletando o valor das notas no vetor notas[4] com o for
    for (contador = 0; contador < 4; contador++)
    {
      // Esse do ... while for�a o usu�rio a entrar com uma nota entre 0 e 10
      do
      {
        // Esse if verifica se � a primeira vez que a pessoa est� entrando com dados ou n�o
        // Se o valor da posi��o do vetor for diferente de 0 e for menor que 0 ou maior que 10,
        // ele exibe o texto pedindo uma nota v�lida
        if (notas[contador] < 0 || notas[contador] > 10 && notas[contador] != 0)
        {
          printf("\n  ----------------------------------------------\n");
          printf("    Insira uma nota v�lida!\n");
          printf("  ----------------------------------------------\n\n");
        }
        printf("  Informe o valor da %d� nota bimestral: ", contador+1);
        scanf("%f", &notas[contador]);
      } while (notas[contador] < 0 || notas[contador] > 10);
      // A vari�vel soma armazena a soma das notas do nvetor
      soma = soma + notas[contador];
      printf("\n");
    }
    // C�lculo da m�dia. Usei contador-1 pois se em algum momento precisar de mais
    // ou menos do que 4 notas, alteramos a quantidade de posi��es do vetor na
    // declara��o e na condi��o dos for, sem precisar se preocupar se o c�lculo
    // ainda estar� certo.
    media = soma/(contador);
    // Limpa a tela para exibir os resultados
    system("cls");
    // Exibi��o das notas inseridas
    printf("--------------------------------------------------------\n");
		printf("|                ##### SUAS NOTAS #####                |\n");
		printf("--------------------------------------------------------\n\n");
    // For para exibir todas as notas armazenadas
    for (contador = 0; contador < 4; contador++)
    {
      printf("  Nota bimestal [%d]: %.1f\n", contador+1, notas[contador]);
    }
    // Condicionais para exibir se est� aprovado ou reprovado
    if (media >=5)
    {
      printf("\n--------------------------------------------------------\n");
  		printf("|                 ##### APROVADO #####                |\n");
  		printf("--------------------------------------------------------\n\n");
      printf("  O aluno est� aprovado. Valor da m�dia: %.1f.\n\n", media);
    }
    else
    {
      printf("\n--------------------------------------------------------\n");
  		printf("|                 ##### REPROVADO #####                |\n");
  		printf("--------------------------------------------------------\n\n");
      printf("  O aluno est� reprovado. Valor da m�dia: %.1f.\n\n", media);
    }
		printf("--------------------------------------------------------\n\n");
    soma = 0;
    media = 0;
		printf("Deseja calcular novamente? [S]im ou [N]�o: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
