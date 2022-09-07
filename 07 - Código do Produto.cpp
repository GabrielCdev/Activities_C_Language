#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int cod;
	
	printf("Informe o código do produto: ");
	scanf("%d",&cod);
	
	if(cod == 1)
	  printf("\nAlimento não-perecível!\n");
	else
		if(cod>1 && cod<5)
		  printf("\nAlimento perecível!\n");
		else
			if(cod == 5 || cod == 6)
			  printf("\nVestuário!\n");
			else
				if(cod == 7)
				  printf("\nHigiene Pessoal!\n");
				else
				  printf("\nCódigo Inválido!\n");
				  
	system("Pause");
}
