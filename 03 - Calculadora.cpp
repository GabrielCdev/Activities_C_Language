#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	
	float a, b;
	char op;
	
	printf("Informe o primeiro valor: ");
	scanf("%f",&a);
	
	printf("Informe a opera��o desejada: ");
	fflush(stdin);
	scanf ("%c", &op);
	
	printf("Informe o segundo valor: ");
	scanf("%f", &b);
	
	if(op=='+')
     printf("O resultado �: %f", a+b);
    else
	  if(op=='-')
	   printf("O resultado �: %f", a-b);
	  else  
		if(op=='*')
		 printf("O resultado �: %f", a*b);
		else
		  if(op=='/')
		   printf("O resultado �: %0.3f", a/b);
		  else
		   printf("Oprea��o inv�lida! \n"); 
		   
	system("Pause"); 	
}
