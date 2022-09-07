#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float n[5] = {0};
	float mf, somat;
	int i;
	mf = 0;
	somat = 0;
	i = 0;
	
	printf("Insira 5 notas: \n");
	
	for(i=0; i<5; i++)
	{
		scanf("%f",&n[i]);
	}
	
	for(i=0; i<5; i++)
	{
		somat = somat+n[i];
	}
	
	mf = somat/5;
	
	printf("A média foi de %0.2f\n",mf);
	
	system("Pause");
}
