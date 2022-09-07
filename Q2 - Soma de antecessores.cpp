#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	
	int n, soma, cont;
	cont = 0;
	soma = 0;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&n);
	
	while(cont < n)
	{
		soma = soma+cont;
		cont = cont+1;
	}
	
	printf("A soma dos antecessores do valor informado é: %d", soma);
	
	system("Pause");
}
