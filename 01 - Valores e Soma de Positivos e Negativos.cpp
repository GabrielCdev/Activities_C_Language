#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int n, contp, contn, somap, soman;
	contp = 0;
	contn = 0;
	somap = 0;
	soman = 0;
	
	printf("Informe os valores e aperte enter para confirmar cada valor: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		
		if(n>0)
		{
			contp = contp+1;
			somap = somap+n;
		}
		else
		{
			contn = contn+1;
			soman = soman+n;
		}
		
		scanf("%d",&n);
	}
	
	printf("Foram utilizados %d valores positivos\n", contp);
	printf("A soma dos valores positivos foi %d\n", somap);
	printf("Foram utilizados %d valores negativos\n", contn);
	printf("A soma dos valores negativos foi %d\n", soman);
	
	system("pause");
}
