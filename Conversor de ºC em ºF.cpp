#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float c, f;
	f = 0;
	
	printf("Informe a temperatura em �C (Celsius): ");
	scanf("%f",&c);
	
	f = (1.8*c)+32;
	
	printf("A temperatura correspondente em �F (Fahrenheit) �: %0.2f\n",f);
	
	system("pause");
}
