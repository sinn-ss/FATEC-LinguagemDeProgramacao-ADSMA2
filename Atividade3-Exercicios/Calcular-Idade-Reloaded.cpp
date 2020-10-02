#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> //necessário para usar localtime() e struct tm

    int main(void)
    {
    	setlocale(LC_ALL, ""); //Aquela paradinha que corrige os acentos, da lib locale.h
		int dia, mes, ano, idade; // Declaração das variáveis...
		bool bissexto; // Variavel que vai verificar se o ano é bissexto ou não
		struct tm *data_hora_atual; // Declaração da variável 'data_hora_atual' do tipo tm (da lib time.h)
		time_t segundos; // Variável 'segundos' do tipo time_t para armazenar os segundos e poder manipular depois
		time(&segundos); // Usando a função time pra obter o tempo em segundos
		data_hora_atual = localtime(&segundos); // Para converter de segundos para o tempo local, usamos a função localtime
		int ano_atual = data_hora_atual->tm_year+1900; // Variável que vai armazenar o ano atual, só pro código ficar mais "amigável" mais abaixo. PRecisa desse +1900 pra retornar o ano certo!
		int mes_atual = data_hora_atual->tm_mon+1; // Variável que vai armazenar o mes atual, só pro código ficar mais "amigável" mais abaixo. Precisa desse +1 pra ficar certo!
		int dia_atual = data_hora_atual->tm_mday; // Variável que vai armazenar o dia atual, só pro código ficar mais "amigável" mais abaixo
		
		printf("########## CALCULANDO SUA IDADE ##########\n\n");
		printf("Para calcular sua idade, vou precisar saber sua data de nascimento primeiro.\n");
		
		// Primeiro o ano, vamos identificar se é ano bissexto ou não
		printf("\nAno: ");
		scanf("%d", &ano);
		// Validar o ano pq o cara não é Matusalem, e tbm não veio do futuro (eu espero)
		while (ano < 1900 || ano > ano_atual)
		{
			printf("\nInforme um ano válido!\n");
			printf("Ano: ");
			scanf("%d", &ano);
		}
		// Aqui a gente vai verificar se o ano é bissexto, pra poder validar o caso de 28 ou 29 de fevereiro na data de nascimento
		// É raro, mas pode acontecer!
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
		
		printf("\nMês: ");
		scanf("%d", &mes);
		// Pede o mês primeiro, porque mais abaixo vamos verificar se o cara ta tentando colocar 31 dias em mês que só tem 30 dias
		// VALIDANDO O MÊS e obrigando ele a colocar um mês válido
		while (mes < 1 || mes > 12)
		{
			printf("\nInforme um mês válido!\n");
			printf("Mês: ");
			scanf("%d", &mes);
		}
		
		printf("\nDia: ");
		scanf("%d", &dia);
		// VALIDANDO O DIA e obrigando a colocar um dia válido
		while (dia < 1 || dia > 31)
		{
			printf("\nInforme um dia válido!\n");
			printf("Dia: ");
			scanf("%d", &dia);
		}
		// Seeee o cara colocar mais de 29 dias (ano bissexto, né) em fevereiro, a gente obriga ele a fazer direito tbm!
		if (mes == 2)
		{
			if (bissexto == true)
			{
				while (dia < 1 || dia > 29)
				{
					printf("\nO mês %d não tem %d dias!\nInforme o dia correto: ", mes, dia);
					scanf("%d", &dia);
				}
			}
			else
			{
				while (dia < 1 || dia > 28)
				{
					printf("\nO ano %d não é bissexto, então o mês %d não pode ter mais que 28 dias!", ano, mes);
					printf("\nInforme o dia correto: ", mes, dia);
					scanf("%d", &dia);
				}
			}
		}
		// Se naaao, se o cara colocar 31 dias em meses que só tem 30, a gente faz ele por a data certa tbm!
		else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
		{
			while (dia == 31 || dia < 1 || dia > 31)
			{
				printf("\nO mês %d não tem %d dias!\nInforme o dia correto: ", mes, dia);
				scanf("%d", &dia);
			}
		}
		
		// Informando a data de nascimento do cara
		printf("\nVocê nasceu no dia %d/%d/%d.\n", dia, mes, ano);
		
		// Informando a data atual capturada do sistema
		printf("\nA data Atual é: %d/%d/%d", dia_atual, mes_atual, ano_atual);
		
		// Agora, a gente precisa saber se o cara já fez aniversário esse ano.
		// Se o mês que ele nasceu for o mesmo que o mês atual, precisamos verificar se o dia que ele nasceu já passou ou não
		if (mes == mes_atual)
		{
			// Se o mês for o mesmo, mas o dia que ele nasceu não tiver passado ainda, a gente subtrai 1
			if (dia > dia_atual)
			{
				idade = ano_atual - ano - 1;
			}
			// Se o dia já passou, então ele já fez aniversário, então não precisa subtrair 1
			else
			{
				idade = ano_atual - ano;
			}
		}
		// Se o mês que a pessoa nasceu estiver depois (for maior que o mes atual), ainda não fez aniversário, então subtrai 1
		else if (mes > mes_atual)
		{
			idade = ano_atual - ano - 1;
		}
		// Mas se o mes ja passou, entao ja fez aniversario, nao precisa subtrair
		else
		{
			idade = ano_atual - ano;
		}
		
		// Agora é só retornar a idade certa :D
		printf("\n\nSua idade atual é %d anos.\n\n", idade);
		system("PAUSE");
		
    }
