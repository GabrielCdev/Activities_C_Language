#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
      
    int i;
    i = 0;
    
    //Estrutura While:
	 
    while (i<10)
    {
      printf("Valor de i = %d \n", i);    
      i++;
	}
    
	//Estrutura For:
	  
    printf("Repetição para ");
    for (i=0; i<10; i++)
      printf("valor de i = %d \n", i);
      
    system("Pause");         
}      
