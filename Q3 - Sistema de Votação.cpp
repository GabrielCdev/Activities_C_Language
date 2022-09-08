#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cadastro
{
	int codCandidato;
	char nomeCandidato[50];
	int qtdVotos;
};

void cadastrar(cadastro candidatos[])
{
	int i = 0;

	printf("Codigo: ");
	scanf("%d",&candidatos[i].codCandidato);
	
	printf("Nome do Candidato: ");
	fflush(stdin);
	gets(candidatos[i].nomeCandidato);
		
	i++;
	system("cls");
}

void localizar(cadastro candidatos[])
{
	int cod;
	int x;
		
	system("cls");
	printf("Informe o codigo do candidato: ");
	scanf("%d", &cod);
	
	if(candidatos[x].codCandidato == cod)
	{
		printf("\nCodigo: %d\n", candidatos[x].codCandidato);
		printf("Nome do Candidato: %s\n", candidatos[x].nomeCandidato);
	}
	
	printf("\n");
	system("pause");
}

void votar(cadastro candidatos[])
{
	int ContA, ContB, ContC, ContBr, ContN, Voto, ContVoto;
	ContVoto = ContA = ContB = ContC = ContBr = ContN = 0;
	int op;
	
	while (Voto != 7)
	{
		system("cls");
		printf("Escolha o candidato a ser votado:\n\n");
		printf("1 = Candidato A\n2 = Candidato B\n3 = Candidato C\n4 = Voto Branco\n5 = Voto Nulo\n6 = Consultar Votos\n\n");
		printf("Voto --> ");
		scanf("%d",&Voto);
		
		switch (Voto)
		{
			case 1: 
				ContA++; 
				break;
				
			case 2: 
				ContB++; 
				break;
				
			case 3: 
				ContC++; 
				break;
				
			case 4: 
				ContBr++; 
				break;
				
			case 5: 
				ContN++; 
				break;
			
			case 6:
			{
				printf("Candidato A = %d Votos\n", ContA);
				printf("Candidato B = %d Votos\n", ContB);
				printf("Candidato C = %d Votos\n", ContC);
				system("pause");
			}
		}
		ContVoto++;
	}
}	

main ()
{
	cadastro candidatos[100];
	int i, op;
	
	while(op != 4)
	{
		printf("Tabela de Opcoes:\n");
		printf("\n1 - Cadastrar Candidatos\n2 - Localizar Candidato\n3 - Votar\n4 - Sair\n");
		printf("\nEscolha a opcao: ");
		scanf("%d",&op);
		printf("\n");
		
		switch(op)
		{
			case 1:
				cadastrar(candidatos);
				break;
				
			case 2:
				localizar(candidatos);
				break;
				
			case 3:
				votar(candidatos);
				break;
			
			default:
				printf("Fim!\n");
				break;
		}
	}
	printf("\n");
	system("pause");
}
