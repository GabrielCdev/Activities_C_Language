#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int cod;
	
	printf("Informe o c�digo do produto: ");
	scanf("%d",&cod);
	
	if(cod == 1)
	  printf("\nAlimento n�o-perec�vel!\n");
	else
		if(cod>1 && cod<5)
		  printf("\nAlimento perec�vel!\n");
		else
			if(cod == 5 || cod == 6)
			  printf("\nVestu�rio!\n");
			else
				if(cod == 7)
				  printf("\nHigiene Pessoal!\n");
				else
				  printf("\nC�digo Inv�lido!\n");
				  
	system("Pause");
}
