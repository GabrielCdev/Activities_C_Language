#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	
	float maior, menor, media, nota, somat;
	int cont;
	cont = 0;
	somat = 0;
	maior = 0;
	menor = 11;
	
	printf("Informe a primeira nota: ");
	scanf("%f",&nota);
	
	while(nota!=-1)
	{
		if(nota>=0 && nota<=10)
		{
			somat = somat+nota;
			cont = cont+1;
		}
			if(nota>maior)
			{
				maior = nota;
			}
				if(nota<menor)
				{
					menor = nota;
				}
	
		printf("Informe a próxima nota: ");
		scanf("%f",&nota);
	}
	
	if(cont>0)
	{
		media = somat/cont;
		printf("A média foi de: %0.2f\n", media);
		printf("A maior nota foi: %0.2f\n", maior);
		printf("A menor nota foi: %0.2f\n", menor);
	}
	else
	{
		printf("Não existem notas!\n");
	}
	
	system("Pause");
}
