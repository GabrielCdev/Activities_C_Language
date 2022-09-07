#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int v[10], v2[10];
	int i;
	i = 0;
	
	for(i=0; i<10; i++)
	{
		printf("Informe um valor inteiro: ");
		scanf("%d",&v[i]);
	}
	
	for(i=0; i<10; i++)
	{
		v2[i] = v[i]*2;
		printf("O dobro do valor é: %d\n",v2[i]);
	}
		
	system("Pause");
}
