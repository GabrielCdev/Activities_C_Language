#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int h, min, s;
	
	printf("Informe os segundos: ");
	scanf("%d",&s);
	
	h = s/3600;
	min = (s%3600)/60;
	s = (s%3600)%60;
	
	printf("%d horas, %d minutos, %d segundos!",h, min, s);
	
	system("pause");
}
