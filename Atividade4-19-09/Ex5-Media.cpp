// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 4 - Entrega dia 19-09-2020
// Exercício 5
// Escrever um programa em linguagem C que faça a leitura de quatro valores
// numéricos referentes a quatro notas bimestrais de um aluno, efetuar o
// cálculo da média e apresentá-la junto com uma das seguintes mensagens: caso
// o valor da média seja maior ou igual a 5, apresentar "aluno aprovado";
// caso contrário, apresentar "aluno reprovado".

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
  int contador;
  float notas[4], soma, media;
  char resposta = 's'; // Variável para verificar se quer executar o cálculo novamente
  // Esse do ... while mantém o programa em repetição até que o usuário diga que não quer mais calcular nada
  do
	{
		system("cls"); // Limpa a tela
		system("title Cálculo de Média"); // Título da janela
		system("mode 56,20"); // Tamanho da janela
		system("color 0A"); // Cor do fundo (0); Cor do texto (A)
		printf("--------------------------------------------------------\n");
		printf("|             ##### CÁLCULO DE MÉDIA #####             |\n");
		printf("--------------------------------------------------------\n\n");
    // Coletando o valor das notas no vetor notas[4] com o for
    for (contador = 0; contador < 4; contador++)
    {
      // Esse do ... while força o usuário a entrar com uma nota entre 0 e 10
      do
      {
        // Esse if verifica se é a primeira vez que a pessoa está entrando com dados ou não
        // Se o valor da posição do vetor for diferente de 0 e for menor que 0 ou maior que 10,
        // ele exibe o texto pedindo uma nota válida
        if (notas[contador] < 0 || notas[contador] > 10 && notas[contador] != 0)
        {
          printf("\n  ----------------------------------------------\n");
          printf("    Insira uma nota válida!\n");
          printf("  ----------------------------------------------\n\n");
        }
        printf("  Informe o valor da %dª nota bimestral: ", contador+1);
        scanf("%f", &notas[contador]);
      } while (notas[contador] < 0 || notas[contador] > 10);
      // A variável soma armazena a soma das notas do nvetor
      soma = soma + notas[contador];
      printf("\n");
    }
    // Cálculo da média. Usei contador-1 pois se em algum momento precisar de mais
    // ou menos do que 4 notas, alteramos a quantidade de posições do vetor na
    // declaração e na condição dos for, sem precisar se preocupar se o cálculo
    // ainda estará certo.
    media = soma/(contador);
    // Limpa a tela para exibir os resultados
    system("cls");
    // Exibição das notas inseridas
    printf("--------------------------------------------------------\n");
		printf("|                ##### SUAS NOTAS #####                |\n");
		printf("--------------------------------------------------------\n\n");
    // For para exibir todas as notas armazenadas
    for (contador = 0; contador < 4; contador++)
    {
      printf("  Nota bimestal [%d]: %.1f\n", contador+1, notas[contador]);
    }
    // Condicionais para exibir se está aprovado ou reprovado
    if (media >=5)
    {
      printf("\n--------------------------------------------------------\n");
  		printf("|                 ##### APROVADO #####                |\n");
  		printf("--------------------------------------------------------\n\n");
      printf("  O aluno está aprovado. Valor da média: %.1f.\n\n", media);
    }
    else
    {
      printf("\n--------------------------------------------------------\n");
  		printf("|                 ##### REPROVADO #####                |\n");
  		printf("--------------------------------------------------------\n\n");
      printf("  O aluno está reprovado. Valor da média: %.1f.\n\n", media);
    }
		printf("--------------------------------------------------------\n\n");
    soma = 0;
    media = 0;
		printf("Deseja calcular novamente? [S]im ou [N]ão: ");
		scanf("%s", &resposta);
	} while (resposta == 's' or resposta == 'S');
}
