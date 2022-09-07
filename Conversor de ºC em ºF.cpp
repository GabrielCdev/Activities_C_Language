#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float c, f;
	f = 0;
	
	printf("Informe a temperatura em ºC (Celsius): ");
	scanf("%f",&c);
	
	f = (1.8*c)+32;
	
	printf("A temperatura correspondente em ºF (Fahrenheit) é: %0.2f\n",f);
	
	system("pause");
}
