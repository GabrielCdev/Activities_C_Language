#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
      setlocale(LC_ALL,"Portuguese");
      
      int v1[5], v2[5], v3[5];
      int i = 0; //i = Índice
      
      printf("Informe os valores para v1: \n");
      for(i = 0; i < 5; i++)
      {
        scanf("%d",&v1[i]); //Leia o vetor 1 na posição "i"
      }
      
      printf("\n");
      printf("Informe os valores para v2: \n");
      for(i = 0; i < 5; i++)
      {
          scanf("%d",&v2[i]);
      }    

      for(i=0; i<5; i++)
      {
        v3[i] = v1[i] + v2[i];
      }
      
      printf("\n");
      printf("A soma dos valores de cada vetor será igual a: \n");
      
      for (i=0; i<5; i++)
      {
        printf("%d \n",v3[i]);  
      }
       
      system("Pause");
}
