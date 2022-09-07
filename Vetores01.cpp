#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
   setlocale(LC_ALL,"Portuguese");
   
   float nota, soma, media;
   float notas[10];    
   int i, contnotas;
   i = 0;
   contnotas = 0;
   soma = 0;
   
   while (i<10)
   {
         printf("Informe a nota %d: ", i);
         scanf("%f",&nota);
         
         notas[i] = nota;
         
         soma = soma + nota;
         i = i + 1;
   }
   
   media = soma/i;
   printf("\n");
   printf("Média = %0.2f \n \n", media);         
   
   printf("Exibindo os valores do vetor: \n");
   for (i=0; i<10; i++) 
   {
     if(notas[i] > media)
     {
       printf("%0.2f \n",notas[i]);
       contnotas = contnotas + 1;
     }  
   }    
   
   printf("\n");
   printf("Quantidade de notas acima da média = %d \n \n", contnotas);
     
   system("Pause");   
}
