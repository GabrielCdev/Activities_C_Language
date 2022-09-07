#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	char n[20];
	int i, dv, aa, an;
	
	printf("Informe o seu nome: ");
	scanf("%s",&n);
	
	printf("\nInforme a sua idade: ");
	scanf("%d",&i);
	
	printf("\nInforme o ano de nascimento: ");
	scanf("%d",&an);
	
	printf("\nInforme o ano atual: ");
	scanf("%d",&aa);
	
	if(an>aa)
	  printf("\nAno de nascimento inválido!\n");
	else
	  dv = (aa-an)*365;
	  
	printf("\nVocê possui: %d dias de vida!\n", dv);
	
	system("Pause");
}
