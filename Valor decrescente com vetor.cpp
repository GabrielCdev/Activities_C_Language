#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int v[15], i;
	i = 0;
	
	for(i=0; i<15; i++)
	{
		printf("Informe um valor: ");
		scanf("%d",&v[i]);
	}
	
	for(i=14; i>-1; i--)
	{
		printf("%d\n",v[i]);
	}
	
	system("Pause");
}
