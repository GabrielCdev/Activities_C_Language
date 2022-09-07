#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	
	float a, b, c, menor, medio, maior;
	menor = 0;
	medio = 0;
	maior = 0;
	
	printf("Informe o primeiro valor: ");
	scanf("%f",&a);
	
	printf("Informe o segundo valor: ");
	scanf("%f",&b);
	
	printf("Informe o terceiro valor: ");
	scanf("%f",&c);
	
	if(a<b)
	{
	  menor = a;
	  maior = b;
	}
	else
	{
		menor = b;
		maior = a;
	}
	
	if(c>menor && c<maior)
	{
		medio = c;
	}
	else
		if(c<menor)
		{
			medio = menor;
			menor = c;
		}
		else
			if(c>maior)
			{
				medio = maior;
				maior = c;
			}
		
		printf("%f, %f, %f \n", menor, medio, maior);
		
		system("Pause");
}
