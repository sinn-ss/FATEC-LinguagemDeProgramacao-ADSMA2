#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> //necess�rio para usar localtime() e struct tm

    int main(void)
    {
    	setlocale(LC_ALL, ""); //Aquela paradinha que corrige os acentos, da lib locale.h
		int dia, mes, ano, idade; // Declara��o das vari�veis...
		bool bissexto; // Variavel que vai verificar se o ano � bissexto ou n�o
		struct tm *data_hora_atual; // Declara��o da vari�vel 'data_hora_atual' do tipo tm (da lib time.h)
		time_t segundos; // Vari�vel 'segundos' do tipo time_t para armazenar os segundos e poder manipular depois
		time(&segundos); // Usando a fun��o time pra obter o tempo em segundos
		data_hora_atual = localtime(&segundos); // Para converter de segundos para o tempo local, usamos a fun��o localtime
		int ano_atual = data_hora_atual->tm_year+1900; // Vari�vel que vai armazenar o ano atual, s� pro c�digo ficar mais "amig�vel" mais abaixo. PRecisa desse +1900 pra retornar o ano certo!
		int mes_atual = data_hora_atual->tm_mon+1; // Vari�vel que vai armazenar o mes atual, s� pro c�digo ficar mais "amig�vel" mais abaixo. Precisa desse +1 pra ficar certo!
		int dia_atual = data_hora_atual->tm_mday; // Vari�vel que vai armazenar o dia atual, s� pro c�digo ficar mais "amig�vel" mais abaixo
		
		printf("########## CALCULANDO SUA IDADE ##########\n\n");
		printf("Para calcular sua idade, vou precisar saber sua data de nascimento primeiro.\n");
		
		// Primeiro o ano, vamos identificar se � ano bissexto ou n�o
		printf("\nAno: ");
		scanf("%d", &ano);
		// Validar o ano pq o cara n�o � Matusalem, e tbm n�o veio do futuro (eu espero)
		while (ano < 1900 || ano > ano_atual)
		{
			printf("\nInforme um ano v�lido!\n");
			printf("Ano: ");
			scanf("%d", &ano);
		}
		// Aqui a gente vai verificar se o ano � bissexto, pra poder validar o caso de 28 ou 29 de fevereiro na data de nascimento
		// � raro, mas pode acontecer!
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
		// Pede o m�s primeiro, porque mais abaixo vamos verificar se o cara ta tentando colocar 31 dias em m�s que s� tem 30 dias
		// VALIDANDO O M�S e obrigando ele a colocar um m�s v�lido
		while (mes < 1 || mes > 12)
		{
			printf("\nInforme um m�s v�lido!\n");
			printf("M�s: ");
			scanf("%d", &mes);
		}
		
		printf("\nDia: ");
		scanf("%d", &dia);
		// VALIDANDO O DIA e obrigando a colocar um dia v�lido
		while (dia < 1 || dia > 31)
		{
			printf("\nInforme um dia v�lido!\n");
			printf("Dia: ");
			scanf("%d", &dia);
		}
		// Seeee o cara colocar mais de 29 dias (ano bissexto, n�) em fevereiro, a gente obriga ele a fazer direito tbm!
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
		// Se naaao, se o cara colocar 31 dias em meses que s� tem 30, a gente faz ele por a data certa tbm!
		else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
		{
			while (dia == 31 || dia < 1 || dia > 31)
			{
				printf("\nO m�s %d n�o tem %d dias!\nInforme o dia correto: ", mes, dia);
				scanf("%d", &dia);
			}
		}
		
		// Informando a data de nascimento do cara
		printf("\nVoc� nasceu no dia %d/%d/%d.\n", dia, mes, ano);
		
		// Informando a data atual capturada do sistema
		printf("\nA data Atual �: %d/%d/%d", dia_atual, mes_atual, ano_atual);
		
		// Agora, a gente precisa saber se o cara j� fez anivers�rio esse ano.
		// Se o m�s que ele nasceu for o mesmo que o m�s atual, precisamos verificar se o dia que ele nasceu j� passou ou n�o
		if (mes == mes_atual)
		{
			// Se o m�s for o mesmo, mas o dia que ele nasceu n�o tiver passado ainda, a gente subtrai 1
			if (dia > dia_atual)
			{
				idade = ano_atual - ano - 1;
			}
			// Se o dia j� passou, ent�o ele j� fez anivers�rio, ent�o n�o precisa subtrair 1
			else
			{
				idade = ano_atual - ano;
			}
		}
		// Se o m�s que a pessoa nasceu estiver depois (for maior que o mes atual), ainda n�o fez anivers�rio, ent�o subtrai 1
		else if (mes > mes_atual)
		{
			idade = ano_atual - ano - 1;
		}
		// Mas se o mes ja passou, entao ja fez aniversario, nao precisa subtrair
		else
		{
			idade = ano_atual - ano;
		}
		
		// Agora � s� retornar a idade certa :D
		printf("\n\nSua idade atual � %d anos.\n\n", idade);
		system("PAUSE");
		
    }
