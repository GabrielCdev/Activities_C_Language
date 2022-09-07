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
	
	printf("Informe a operação desejada: ");
	fflush(stdin);
	scanf ("%c", &op);
	
	printf("Informe o segundo valor: ");
	scanf("%f", &b);
	
	if(op=='+')
     printf("O resultado é: %f", a+b);
    else
	  if(op=='-')
	   printf("O resultado é: %f", a-b);
	  else  
		if(op=='*')
		 printf("O resultado é: %f", a*b);
		else
		  if(op=='/')
		   printf("O resultado é: %0.3f", a/b);
		  else
		   printf("Opreação inválida! \n"); 
		   
	system("Pause"); 	
}
