#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	
	float m;
	int t, h, min, s;
	t = 0;
	
	printf("Informe a massa inicial do material em gramas: ");
	scanf("%f",&m);
	
	while(m>=0.5)
	{
	  m = m/2;
	  t = t+50;
	}
	
	h = t/3600;
	min = (t%3600)/60;
	s = (t%3600)%60;
	
	printf("A massa final foi de: %f \n", m);
	printf("O tempo necessário é de: \n %d hora(s), %d minuto(s) e %d segundo(s) \n", h, min, s);
	
	system("Pause");
} 
