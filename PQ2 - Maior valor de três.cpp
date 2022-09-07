#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int a, b, c;
	
	printf("Informe o primeiro valor: ");
	scanf("%d",&a);
	
	printf("Informe o segundo valor: ");
	scanf("%d",&b);
	
	printf("Informe o terceiro valor: ");
	scanf("%d",&c);
	
	if(a==b || a==c)
	{
		printf("Os valores são iguais!\n");
	}
	else
	{
		if(a>b && a>c)
		{
			printf("O maior valor é %d\n",a);
		}
		else
		{
			if(b>a && b>c)
			{
				printf("O maior valor é %d\n",b);
			}
			else
			{
				if(c>a && c>b)
				{
					printf("O maior valor é %d\n", c);
				}
			}
		}
	}
	
	system("Pause");
}
