#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float sb, grat, imp, st;
	
	printf("Escreva seu sal�rio-base: ");
	scanf("%f", &sb);
	
	grat = sb*0.05;
	imp = sb*0.07;
	st = sb+grat-imp;
	
	printf("Seu sal�rio ser� de %0.2f \n", st);
	
	system("pause");


}
