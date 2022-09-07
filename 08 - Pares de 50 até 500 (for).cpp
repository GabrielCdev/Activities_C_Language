#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	i = 50;
	
	//Repetição com FOR
	
	for(i=50; i<=500; i++)
	{
		if(i%2==0)
		  printf("%d ",i);
	}
	
	printf("\n");	
	system("Pause");
}
