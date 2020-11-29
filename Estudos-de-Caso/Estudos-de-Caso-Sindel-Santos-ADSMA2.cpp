// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programação

// ESTUDOS DE CASO - Entrega dia 30/11/2020
// Observações:
// 1- Os dois estudos de caso (I e II) deverão ser entregues em um único programa.
// Sendo que serão avaliadas as duas etapas, estudo de caso I e estudo de caso II,
// com peso de 3.0 pontos cada uma.
// 2- Essa tarefa é individual, portanto tarefas com códigos iguais serão anuladas.

// Estudos de Caso
// Em estatística a correlação linear simples busca estudar a relação entre duas
// variáveis. Para isso interessa a análise calcular o coeficiente de correlação
// linear entre essas por meio do coeficiente de Pearson. Esse coeficiente serve
// para verificar a estrutura de correlação entre as variáveis analisadas. A
// estimativa da relação existente entre duas variáveis pode ser feita usando uma
// função matemática chama de reta de regressão. A regressão linear consiste no
// estabelecimento de uma equação matemática linear que descreva o relacionamento
// entre duas variáveis, em que uma é dependente e outra independente. A reta de
// regressão linear serve para estimar valores de uma variável, com base em valores
// conhecidos de outra variável. (LOPES, 2008).
// A correlação linear tem aplicação multidisciplinar, sendo bastante divulgado na
// área de sistemas de informação para tomada de decisão. Considere a seguinte
// aplicação:
// Uma empresa que vende por correio componentes de computadores pessoais, software e
// hardware possui um depósito geral para a distribuição dos produtos. Atualmente, a
// administração se encontra examinando o processo de distribuição deste depósito e
// está interessado em estudar os fatores que afetam os custos de distribuição do depósito.
// Para isso foram coletados dados de 12 meses correspondentes aos custos de distribuição
// do deposito, as vendas e número de os pedidos. De acordo com a situação problema faça
// um programa em C que cumpra duas etapas:

// Estudo de Caso I
// Fazer um programa que peça para o usuário inserir, via teclado, dois vetores de
// valores inteiro, de tamanho n = 12 usando dois ponteiros ptx (vendas) e pty
// (custos de distribuição). Em seguida criar vetores tais que são iguais a:
// Soma(x): Soma dos valores do vetor ptx
// Soma(y): Soma dos valores do vetor pty
// Soma(x,y): Soma dos valores do vetor resultante da multiplicação dos valores do
//            vetor ptx pelos valores do vetor pty
// Soma(x^2): Soma dos valores quadrados de ptx
// Soma(y^2): Soma dos valores quadrados de pty
// (Soma(x))^2: A Soma dos valores de ptx elevada ao quadrado
// (Soma(y))^2: A Soma dos valores de pty elevada ao quadrado

// Estudo de Caso II
// Quanto ao sinal, o coeficiente de correlação r positivo mostra uma relação direta
// entre as variáveis analisadas enquanto que r negativo mostra uma correlação inversa.
// Pode-se julgar o grau de correlação entre as variáveis a partir dos valores de r em
// intervalo. Ou seja, se:
//   0 <= r < 0.3 Positivo ou negativo indica uma correlação fraca.
// 0.3 <= r < 0.6 Positivo ou negativo indica uma correlação mediana.
// 0.6 <= r < 0.9 Positivo ou negativo indica uma correlação forte.
// 0.9 <= r < 1.0 Positivo ou negativo indica uma correlação muito forte.
//        r = 1 Positivo ou negativo indica uma correlação perfeita.
// Fazer um programa que utiliza os vetores criados no Estudo de Caso I para calcular
// o coeficiente de correlação (1) e o coeficiente de determinação (2). O programa também
// deve imprimir o grau de correlação entre as variáveis ptx (vendas) e pty (custo de
// distribuição) com base nos critérios apontados anteriormente.
// r =[n . Soma(x . y)] - [Soma(x) . Soma(y)] / ?[n . Soma x^2 - (Soma(x))^2] . [n . Soma y^2 - (Soma(y))^2] (1)
// R^2 (2)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <cstdlib>
// Definindo o número de elementos dos vetores como n = 12 (Constante)
#define n 12

// Definindo a função soma para os vetores do tipo inteiro
int soma(int vetor[], int tamanho)  
{  
    int soma = 0;   
    for (int cont_soma = 0; cont_soma < tamanho; cont_soma++)  
    soma += vetor[cont_soma];  
  
    return soma;  
}

// Definindo a função soma_float para os vetores do tipo float
float soma_float(float vetor[], int tamanho)  
{  
    float soma = 0;   
    for (int cont_soma = 0; cont_soma < tamanho; cont_soma++)  
    soma += vetor[cont_soma];  
  
    return soma;  
}  

int main(void)
{
    setlocale(LC_ALL, "");
    // Declaração de variáveis
    // Os vetores e variáveis que contam com resultados de potência foram definidos como float
    // devido à função pow retornar os resultados no tipo float ou double, evitando assim
    // falhas no cálculo das potências e das somas
    // Fonte: https://www.clubedohardware.com.br/topic/1310045-c%C3%A1lculo-pot%C3%AAncia-dando-errado/
    int *ptx, *pty, *xy, contador;
    float *x_quadrado, *y_quadrado, soma_x_quadrado, soma_y_quadrado;
    int soma_ptx, soma_pty, soma_xy, soma_quadrados_x, soma_quadrados_y;
    float fator1, fator2;
    float coef_relacao, coef_determinacao;

	system("cls");
	system("title ESTUDOS DE CASO - ADSMA2 - SINDEL C. S. SANTOS");
	system("color 0A");
	printf("=================================================================\n");
	printf("|                  ##### ESTUDOS DE CASO #####                  |\n");
	printf("=================================================================\n");
    printf("-----------------------------------------------------------------\n");
	printf("|                  ##### ESTUDO DE CASO I #####                 |\n");
	printf("-----------------------------------------------------------------\n");

    // Alocando espaço para os vetores
    ptx = (int *) malloc(n * sizeof(int));
    pty = (int *) malloc(n * sizeof(int));
    xy = (int *) malloc(n * sizeof(int));
    x_quadrado = (float *) malloc(n * sizeof(float));
    y_quadrado = (float *) malloc(n * sizeof(float));

    // Verificando a alocação de memória
    if (ptx == NULL || pty == NULL || xy == NULL || x_quadrado == NULL || y_quadrado == NULL)
    {
        printf("Falha na alocação de memória!\n");
        system("PAUSE");
        exit(1);
    }

    // Inserção de dados para ptx e pty via teclado
    printf("  Informe os valores para o mês solicitado:\n");

    for (contador = 0; contador < n; contador++)
    {
        // Exibir o mês na tela de acordo com o contador
        switch (contador)
        {
            case 0:
                printf("\n    Janeiro:\n");
                break;
            case 1:
                printf("\n    Fevereiro:\n");
                break;
            case 2:
                printf("\n    Março:\n");
                break;
            case 3:
                printf("\n    Abril:\n");
                break;
            case 4:
                printf("\n    Maio:\n");
                break;
            case 5:
                printf("\n    Junho:\n");
                break;
            case 6:
                printf("\n    Julho:\n");
                break;
            case 7:
                printf("\n    Agosto:\n");
                break;
            case 8:
                printf("\n    Setembro:\n");
                break;
            case 9:
                printf("\n    Outubro:\n");
                break;
            case 10:
                printf("\n    Novembro:\n");
                break;
            case 11:
                printf("\n    Dezembro:\n");
                break;
        }
        // Primeiro coleta valor de vendas para ptx
        printf("      Vendas: ");
        scanf("%d", &ptx[contador]);
        // Depois coleta valor de custos de distribuição para pty
        printf("      Custos de Distribuição: ");
        scanf("%d", &pty[contador]);
        // Multiplicando x por y para armazenar no vetor xy
        xy[contador] = ptx[contador] * pty[contador];
        // Elevando o valor de x ao quadrado para armazenar no vetor x_quadrado
        x_quadrado[contador] = pow(ptx[contador], 2);
        // Elevando o valor de y ao quadrado para armazenar no vetor y_quadrado
        y_quadrado[contador] = pow(pty[contador], 2);
    }

    // Zerando todas as variáveis de somatória
    soma_ptx = 0;
    soma_pty = 0;
    soma_xy = 0;
    soma_quadrados_x = 0;
    soma_quadrados_y = 0;
    soma_x_quadrado = 0;
    soma_y_quadrado = 0;

    // Obtendo as somas dos vetores através das funções soma e soma_float

    // 1 - Soma(x): Soma dos valores do vetor ptx
    soma_ptx = soma(ptx, n);
    // 2 - Soma(y): Soma dos valores do vetor pty
    soma_pty = soma(pty, n);
    // 3 - Soma(x . y): Soma dos valores do vetor resultante da multiplicação
    // dos valores do vetor ptx pelos valores do vetor pty
    soma_xy = soma(xy, n);
    // 4 - Soma(x^2): Soma dos valores quadrados de ptx
    soma_quadrados_x = soma_float(x_quadrado, n);
    // 5 - Soma(y^2): Soma dos valores quadrados de pty
    soma_quadrados_y = soma_float(y_quadrado, n);

    // Para os elementos 6 e 7 (Quadrado da soma de ptx e Quadrado da soma de pty),
    // os resultados não foram gerados em vetor pois é o quadrado da soma de um vetor
    // que já foi somado anteriormente e, sendo assim, não tem como gerar um vetor a
    // partir disso

    // (Soma(x))^2: A Soma dos valores de ptx elevada ao quadrado
    soma_x_quadrado = pow(soma_ptx, 2);
    // (Soma(y))^2: A Soma dos valores de pty elevada ao quadrado
    soma_y_quadrado = pow(soma_pty, 2);

    // Apresentando os valores das somas
    printf("\n");
    printf("-----------------------------------------------------------------\n");
	printf("                            SOMATÓRIAS                           \n");
	printf("-----------------------------------------------------------------\n\n");
    printf("  1. Soma(x): Soma dos valores do vetor ptx: %d\n", soma_ptx);
    printf("  2. Soma(y): Soma dos valores do vetor pty: %d\n", soma_pty);
    printf("  3. Soma(x . y): Soma dos valores do vetor resultante da multiplicação dos valores do vetor ptx pelos valores do vetor pty: %d\n", soma_xy);
    printf("  4. Soma(x^2): Soma dos valores quadrados de ptx: %d\n", soma_quadrados_x);
    printf("  5. Soma(y^2): Soma dos valores quadrados de pty: %d\n", soma_quadrados_y);
    printf("  6. (Soma(x))^2: A Soma dos valores de ptx elevada ao quadrado: %.0f\n", soma_x_quadrado);
    printf("  7. (Soma(y))^2: A Soma dos valores de pty elevada ao quadrado: %.0f\n\n", soma_y_quadrado);


    printf("-----------------------------------------------------------------\n");
	printf("|                 ##### ESTUDO DE CASO II #####                 |\n");
	printf("-----------------------------------------------------------------\n");

    // Dividindo a equação em dois fatores
    fator1 = (n * soma_xy) - (soma_ptx * soma_pty);
    fator2 = (n * soma_quadrados_x - soma_x_quadrado) * (n * soma_quadrados_y - soma_y_quadrado);

    // Obtendo o Coeficiente de Correlação
    coef_relacao = 0;
    coef_relacao = fator1 / sqrt(fator2);

    // Obtendo o Coeficiente Determinação
    coef_determinacao = pow(coef_relacao, 2);

    printf("-----------------------------------------------------------------\n");
	printf("                           CORRELAÇÕES                           \n");
	printf("-----------------------------------------------------------------\n\n");
    // Exibindo os valores dos Coeficientes
    printf("  Coeficiente de Relação R: %.2f\n", coef_relacao);
    printf("  Coeficiente de Determinação R^2: %.2f\n\n", coef_determinacao);

    // Determinando a correlação
    if (abs(coef_relacao) >= 0 && abs(coef_relacao) < 0.3)
    {
        printf("  A correlação é fraca.");
    }
    else if (abs(coef_relacao) >= 0.3 && abs(coef_relacao) < 0.6)
    {
        printf("  A correlação é mediana.");
    }
    else if (abs(coef_relacao) >= 0.6 && abs(coef_relacao) < 0.9)
    {
        printf("  A correlação é forte.");
    }
    else if (abs(coef_relacao) >= 0.9 && abs(coef_relacao) < 1.0)
    {
        printf("  A correlação é muito forte.");
    }
    else if (abs(coef_relacao) == 1.0)
    {
        printf("  A correlação é perfeita.");
    }
    else
    {
        printf("  Não existe correlação.");
    }

    // Liberando os espaços alocados
    free(ptx);
    free(pty);
    free(xy);
    free(x_quadrado);
    free(y_quadrado);

    printf("\n\n-----------------------------------------------------------------\n");
    system("PAUSE");
}