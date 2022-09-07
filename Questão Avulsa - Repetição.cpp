#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{
	//Crie um algoritmo com estrutura de repetição!
  
    setlocale(LC_ALL,"Portuguese");    
	
	float nota, ma;
  
    //Repetição usando WHILE
      
	printf("Repetição WHILE \n");
	int i=0;
	float soma=0;
    while (i<10)
    {
     printf("Informe a nota %d: ", i+1);      
     scanf("%f",&nota);
     soma = soma+nota;
     i++;
    }
      
    //Calcule a média aritmética das notas informadas acima!
      
    ma = soma/i;
    printf("A média aritmética é de %0.2f \n",ma);
      
    //Repetição usando FOR
      
    printf("Repetição FOR \n");
    for(i=0; i<10; i++)
    {
      printf("Informe a nota %d: ", i+1);
      scanf("%f",&nota);
      soma = soma+nota;
    }  
      
    //Calcule a MÉDIA ARITMÉTICA das notas informadas acima!
      
    ma = soma/i;
    printf("A média aritmética é de %0.2f \n",&ma);
      
   system("Pause");
}
