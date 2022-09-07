#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	
	int n, fat;
	
	printf("Insira um valor: ");
	scanf("%d",&n);
		
	for(fat = 1; n>0; n = n-1)
	  fat = fat*n;
	  
	printf("O fatorial é: %d \n", fat);
	
	system("Pause");	
}
