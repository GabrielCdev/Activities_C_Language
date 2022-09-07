#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");

	float pa, pb;
	int a;
	pa = 90000000;
	pb = 200000000;
	a = 0;
		
	while(pa<pb)
	{
	  pa = pa+0.03;
	  pb = pb+0.015;
	  a = a+1;
	}
	
	printf("A população do país A ultrapassará ou igualará a do país B em %d ano(s)! \n", a); 	
	
	system("Pause");
}
