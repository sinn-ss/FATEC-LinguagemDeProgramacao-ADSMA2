// Aluno: Sindel C. S. Santos
// RA: 1680482011032
// Turma: ADSMA2     ||  Disciplina: Linguagem de Programa��o

// ATIVIDADE 3
// 3. Construa um projeto que mostra a idade de uma pessoa a partir da sua data de nascimento em dia, m�s e ano.
// A frase de sa�da deve ser: Voc� nasceu em dia/m�s/ano, logo voc� tem 'x' anos.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

    int main(void)
    {
    	setlocale(LC_ALL, "");
		int dia, mes, ano, idade;
		bool bissexto;
		struct tm *data_hora_atual;
		time_t segundos;
		time(&segundos);
		data_hora_atual = localtime(&segundos);
		int ano_atual = data_hora_atual->tm_year+1900;
		int mes_atual = data_hora_atual->tm_mon+1;
		int dia_atual = data_hora_atual->tm_mday;
		
		printf("########## CALCULANDO SUA IDADE ##########\n\n");
		printf("Para calcular sua idade, vou precisar saber sua data de nascimento primeiro.\n");
		
		printf("\nAno: ");
		scanf("%d", &ano);
		while (ano < 1900 || ano > ano_atual)
		{
			printf("\nInforme um ano v�lido!\n");
			printf("Ano: ");
			scanf("%d", &ano);
		}
		if (ano % 400 == 0)
		{
			bissexto = true;		
		}
		else if ((ano % 4 == 0) && (ano % 100 != 0))
		{
			bissexto = true;		
		}
		else
		{
			bissexto = false;
		}
		
		printf("\nM�s: ");
		scanf("%d", &mes);
		while (mes < 1 || mes > 12)
		{
			printf("\nInforme um m�s v�lido!\n");
			printf("M�s: ");
			scanf("%d", &mes);
		}
		
		printf("\nDia: ");
		scanf("%d", &dia);
		while (dia < 1 || dia > 31)
		{
			printf("\nInforme um dia v�lido!\n");
			printf("Dia: ");
			scanf("%d", &dia);
		}
		if (mes == 2)
		{
			if (bissexto == true)
			{
				while (dia < 1 || dia > 29)
				{
					printf("\nO m�s %d n�o tem %d dias!\nInforme o dia correto: ", mes, dia);
					scanf("%d", &dia);
				}
			}
			else
			{
				while (dia < 1 || dia > 28)
				{
					printf("\nO ano %d n�o � bissexto, ent�o o m�s %d n�o pode ter mais que 28 dias!", ano, mes);
					printf("\nInforme o dia correto: ", mes, dia);
					scanf("%d", &dia);
				}
			}
		}
		else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
		{
			while (dia == 31 || dia < 1 || dia > 31)
			{
				printf("\nO m�s %d n�o tem %d dias!\nInforme o dia correto: ", mes, dia);
				scanf("%d", &dia);
			}
		}
		
		printf("\nVoc� nasceu no dia %d/%d/%d.\n", dia, mes, ano);
		
		printf("\nA data Atual �: %d/%d/%d", dia_atual, mes_atual, ano_atual);
		
		if (mes == mes_atual)
		{
			if (dia > dia_atual)
			{
				idade = ano_atual - ano - 1;
			}
			else
			{
				idade = ano_atual - ano;
			}
		}
		else if (mes > mes_atual)
		{
			idade = ano_atual - ano - 1;
		}
		else
		{
			idade = ano_atual - ano;
		}
		
		printf("\n\nSua idade atual � %d anos.\n\n", idade);
		system("PAUSE");
		
    }
