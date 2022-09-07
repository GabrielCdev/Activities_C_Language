#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	i = 50;
	
	while(i<501)
	{
		if(i%2==0)
		{
		  printf("%d ",i);
		}
	  i = i+1;
	}
	
	system("Pause");
}
