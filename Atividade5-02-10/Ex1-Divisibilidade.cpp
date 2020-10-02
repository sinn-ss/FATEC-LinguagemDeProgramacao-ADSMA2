// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ATIVIDADE 5 - Entrega dia 01/10/2020
// Exercício 1
// Desenvolver dois programas de computador que leia um valor numérico inteiro
// e faça a apresentação desse valor caso seja divisível por 4 e 5. Não sendo
// divisível por 4 e 5, o programa deve apresentar a mensagem "Valor não é
// divisível por 4 e 5". Um programa deve usar o resto da divisão (modulo%) e
// o outro o critério de divisibilidade.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
  int resultado_sem_resto_4, resultado_sem_resto_5;
  float numero, resultado_com_resto_4, resultado_com_resto_5;
  char resposta = 's';
  bool div4=false, div5=false;
  do
	{
    numero = 0;
    div4 = false;
    div5 = false;
		system("cls");
		system("title Números Divisíveis por 4 e 5 - Critério de Divisibilidade");
		system("mode 65,20");
		system("color 0A");
		printf("-----------------------------------------------------------------\n");
		printf("|         ##### CRITÉRIO DE DIVISIBILIDADE - 4 E 5 #####        |\n");
		printf("-----------------------------------------------------------------\n\n");
    printf("  Digite um número inteiro para verificar se ele é divisível\n  por 4 e 5: ");
    scanf("%f", &numero);
    resultado_com_resto_4 = numero / (4);
    resultado_sem_resto_4 = resultado_com_resto_4;
    resultado_com_resto_5 = numero / 5;
    resultado_sem_resto_5 = resultado_com_resto_5;
    if (resultado_com_resto_4 == resultado_sem_resto_4)
    {
      div4=true;
    }
    if (resultado_com_resto_5 == resultado_sem_resto_5)
    {
      div5=true;
    }
    printf("\n");
    printf("-----------------------------------------------------------------\n");
		printf("|                     ##### RESULTADO #####                     |\n");
		printf("-----------------------------------------------------------------\n\n");
    if (div4==true && div5==true)
    {
      printf("  O número %.0f é divisível por 4 e 5.\n\n", numero);
    }
    else
    {
      printf("  O número %.0f NÃO é divisível por 4 e 5.\n\n", numero);
    }
    printf("-----------------------------------------------------------------\n");
    printf("  Gostaria de verificar outro número? ");
    scanf("%s", &resposta);
  } while (resposta == 's' or resposta == 'S');
}
