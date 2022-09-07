#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	
	float a, b, c, mp, p1, p2, p3;
	p1 = 0;
	p2 = 0;
	p3 = 0;
	mp = 0;
	
	printf("Informe a primeira nota: ");
	scanf("%f",&a);
	
	printf("Informe a segunda nota: ");
	scanf("%f",&b);
	
	printf("Informe a terceira nota: ");
	scanf("%f",&c);
	
	if((a<0 && a>11) || (b<0 && b>11) || (c<0 && c>11))
	  printf("Média Inválida! \n");
	else 
		if(a>5)
		{
		  a = a*5;
	  	  p1 = 5;
		}
		else
		{
	  	  a = a*2.5;
	  	  p1 = 2.5;
		}
		
		if(b>5)
		{
			b = b*5;
		  	p2 = 5;
		}
		else
		{
			b = b*2.5;
		  	p2 = 2.5;
		}
		
		if(c>5)
		{
			c = c*5;
			p3 = 5;
		}
		else
		{
			c = c*2.5;  
			p3 = 2.5;
		}

	mp = (a+b+c)/(p1+p2+p3);
	printf("A média final ponderada foi: %0.2f \n",mp);			    		  

	system("Pause");
}
