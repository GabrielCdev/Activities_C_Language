#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int bpa, i;
	
	printf("Informe a sua idade: ");
	scanf("%d",&i);
	
	bpa = i*31536000;
	
	printf("Seu cora��o j� bateu aproximadamente %d vezes", bpa);
	
	system("pause");
}
