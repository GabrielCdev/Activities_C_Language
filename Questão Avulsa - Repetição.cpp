#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{
	//Crie um algoritmo com estrutura de repeti��o!
  
    setlocale(LC_ALL,"Portuguese");    
	
	float nota, ma;
  
    //Repeti��o usando WHILE
      
	printf("Repeti��o WHILE \n");
	int i=0;
	float soma=0;
    while (i<10)
    {
     printf("Informe a nota %d: ", i+1);      
     scanf("%f",&nota);
     soma = soma+nota;
     i++;
    }
      
    //Calcule a m�dia aritm�tica das notas informadas acima!
      
    ma = soma/i;
    printf("A m�dia aritm�tica � de %0.2f \n",ma);
      
    //Repeti��o usando FOR
      
    printf("Repeti��o FOR \n");
    for(i=0; i<10; i++)
    {
      printf("Informe a nota %d: ", i+1);
      scanf("%f",&nota);
      soma = soma+nota;
    }  
      
    //Calcule a M�DIA ARITM�TICA das notas informadas acima!
      
    ma = soma/i;
    printf("A m�dia aritm�tica � de %0.2f \n",&ma);
      
   system("Pause");
}
