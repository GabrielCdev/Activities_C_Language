#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	printf("Digite a idade: ");
	scanf("%d",&i);
	
	if(i<=12)
	  printf("Criança!\n");
	else
		if(i>=13 && i<=17)
		  printf("Adolescente!\n");
		else
			if(i>=18)
			  printf("Adulto!\n");
		
	system("Pause");
}
