#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{

	setlocale(LC_ALL,"Portuguese");
	
	int a;
	
		printf("Informe um n�mero: ");
		scanf("%d",&a);
	
		if(a>0)
		{
	 		printf("Positivo \n");
	 	}
	 	else
	 	{
	 		printf("Negativo \n");
	 	}	 
	  		if(a%2==0)
	  		{
	    	 printf("Par \n");
	    	}
	  		else
	  		{
	    	 printf("�mpar \n"); 
	    	}
	 
	 system("Pause");

}
