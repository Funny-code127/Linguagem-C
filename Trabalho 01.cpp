#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{

//DECLARACAO DE VARIAVEIS
    
    int x, y, z, R;
	char nome[40];


//CABECALHO DE APRESENTAÇÃO DA TURMA

	printf ("*=============================================================================*\n");
	printf ("|                 ___   ___ ___   ___ ___ _________ _________                 |\n");
	printf ("|                 XXX   XXX XXX_  XXX XXX XXXXXXXXX XXXXXXXXX                 |\n");
	printf ("|                 XXX   XXX XXXX_ XXX XXX XXXXXXXXX XXXXXXXXX                 |\n");	
	printf ("|                 XXX   XXX XXXXX_XXX XXX XXX______ XXX _____                 |\n");
	printf ("|                 XXX   XXX XXXXXXXXX XXX XXXXXXXXX XXX XXXXX                 |\n");
	printf ("|                 XXX___XXX XXX XXXXX XXX XXXXXXXXX XXX___XXX                 |\n");	
	printf ("|                 XXXXXXXXX XXX  XXXX XXX XXX       XXXXXXXXX                 |\n");
	printf ("|                 XXXXXXXXX XXX   XXX XXX XXX       XXXXXXXXX                 |\n");
	printf ("|                                                                             |\n");	
	printf ("*=============================================================================*\n");
	printf ("|                     BACHARELADO EM CIENCIAS DA COMPUTACAO                   |\n");
	printf ("|            2020.1 ALGORITMOS E PROGRAMACAO - TURMA CCO1/CCO11 M             |\n");	
	printf ("|                     PROFESSOR MARCELO MONTENEGRO RABELLO                    |\n");
	printf ("*=============================================================================*\n");
	printf ("| EQUIPE: ANTAO RODRIGUES DA SILVA NETO                                       |\n");
	printf ("|         HUGO DIEGO DA SILVA ARRUDA                                          |\n");
	printf ("|         LUIS CARLOS DE LIMA                                                 |\n");	
	printf ("|         MATHEUS GUSTAVO XAVIER ANDRADE PLACIDO                              |\n");	
	printf ("|         VINICIUS MAIA AZEVEDO DE OLIVEIRA                                   |\n");
	printf ("*=============================================================================*\n\n");
	printf ("*=============================================================================*\n");	
	printf ("|===================| DIAGNOSTICO PRELIMINAR CORONA VIRUS |===================|\n");
	printf ("*=============================================================================*\n");
	
	
	//material de consulta feito atraves do site https://coronavirus.saude.gov.br/sobre-a-doenca#casossuspeito e; 
	//https://www.health.nsw.gov.au/Infectious/diseases/Pages/2019-ncov-case-definition.aspx
	
	// Apresentação do participante da pesquisa
	
	
	printf ("\nInforme o seu nome e em seguida pressione \"enter\".\n\n");
	gets(nome);
	system("cls");
	printf ("\nSeja bem vindo (a) \"%s\"!\n",nome);
	
	printf ("-------------------------------------------------------------------------------\n");
	printf ("Este programa auxiliara voce a descobrir se voce esta possilvemente infectado\npelo COVID-19 (Corona Virus)\n\n");
	printf ("-------------------------------------------------------------------------------\n");
	printf ("Boa sorte na pesquisa\n\n");
	printf ("Pressione \"enter\" para continuar...");
	getchar(); system ("cls");
	
	//Entrada de dados
	
	printf ("-------------------------------------------------------------------------------\n\n");
	printf ("Voce tem mais de 60 anos?\n\n");
	printf ("-------------------------------------------------------------------------------\n\n");
	printf ("Digite 0 para nao\n\n");
	printf ("Digite 1 para sim\n\n");
	scanf ("%d", &x);
	
	if (x==0)
	{
	printf ("Ok! Vamos para a proxima pergunta\n\n");
	}	
	else
	{			
	printf ("Isso e preocupante, mas, nao e desesperador.\n\n");
	}	
	getchar();
	printf ("Pressione \"enter\" para continuar...");
	getchar();
	system("cls");
	
	printf ("-------------------------------------------------------------------------------\n\n");
	printf ("Voce viajou nos ultimos dias para os EUA, China, Italia ou algum pais que tenha\ncaso confirmado de Corona Virus (COVID-19)?\n\n");
	printf ("-------------------------------------------------------------------------------\n\n");
	printf ("Digite 0 para nao\n\n");
	printf ("Digite 1 para sim\n\n");
	scanf ("%d", &y);
	
	if (y==0)
	{
	printf ("Muito Bom! Ja diminuiu seu risco de contagio!\n\n");
	}	
	else
	{			
	printf ("Vanos analisar com mais cuidado!\n\n");
	}	
	getchar();
	printf ("Pressione \"enter\" para continuar...");
	getchar();
	system("cls");

	printf ("-------------------------------------------------------------------------------\n\n");
	printf ("Voce tem tido febre, tosse ou dificuldade de respirar?\n\n");
	printf ("-------------------------------------------------------------------------------\n\n");
	printf ("Digite 0 para nao\n\n");
	printf ("Digite 1 para sim\n\n");
	scanf ("%d", &z);
	
	if (z==0)
	{
	printf ("Que bom!\n\n");
	}	
	else
	{			
	printf ("Isso nao e bom!\n\n");
	}	
	
	getchar();
	printf ("Pressione \"enter\" para continuar...");
	getchar();
	system("cls");
	
	printf ("-------------------------------------------------------------------------------\n\n");
	printf ("Vamos ver o resultado agora, %s ?\n\n", nome);
	printf ("-------------------------------------------------------------------------------\n\n");
	
	// Resultado da pesquisa
	
	if (x==0 && y==0 && z==0)
	printf ("Voce esta livre de suspeita, porem tome os devidos cuidados para nao se infectar.\n\n");
	else
	if (x==1 && y==0 && z==0)
	printf ("Voce esta no grupo de risco, fique em casa o maximo que puder!\n\n");
	else
	if (x==0 && y==1 && z==0)
	printf ("Voce precisa esta sob observacao pois esteve em areas de contaminacao recentemente!\n\n");
	else
	if (x==0 && y==0 && z==1)
	printf ("Voce tem todos, ou alguns sintomas do Corona Virus. Procure uma unidade de saude!\n\n");
	else
	if (x==1 && y==1 && z==0)
	printf ("Voce precisa estar sob conservacao pois pode desenvolver os sintomas do Corona Virus!\n\n");
	else
	if (x==0 && y==1 && z==1)
	printf ("Voce esta fora do grupo de risco, porem, apresenta alguns sintomas do Corona Virus. Procure uma unidade de saude!");
	else
	if (x==1 && y==0 && z==1)
	printf ("Voce tem alguns, ou todos os sintomas do Corona Virus, alem de estar no grupo de risco.\nProcure uma unidade de saude!\n\n");
	else
	if (x==1 && y==1 && z==1)
	printf ("Voce tem uma grande chance de estar contaminado. Procure uma unidade de saude urgente!\n\n");
	
	printf ("Obrigado pelo seu tempo %s e boa sorte!\n\n",nome);

getch ();		
return (0);
}
