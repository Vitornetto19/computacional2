


#include <stdio.h>


int main(){

   int enesimo = 0;
   float razao = 0;
   float primeiro = 0;
   
   printf("\nQual 'e o primeiro termo da progressao?");
   scanf("%f", &primeiro);
   
   printf("\nQual 'e a razao da progressao?");
   scanf("%f", &razao);
   
   printf("\nqual e o n da progressao'quantidade de termos'");
   scanf("%d", &enesimo);
   
   // considere que a progessao sempre inicie no termo 1.
   
   float termo_final = primeiro + ((enesimo - 1) * razao);
   float soma_total = ((primeiro + termo_final)/2) * ((float)enesimo);
   
   printf("\ntermo_final: %f", termo_final);
   
   printf("\nsoma dos termos: %f", soma_total);
   
   
   return 0;


}
