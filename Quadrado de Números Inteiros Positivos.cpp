#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int n, q;
	
	printf("Informe os n�meros apertando enter para confirmar o valor: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		q = n*n;
		printf("\nO quadrado do n�mero �: %d\n \n",q);
		scanf("%d",&n);	
	}
	
	q = n*n;
	
	system("Pause");
}
