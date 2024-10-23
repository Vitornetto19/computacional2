#include <stdio.h>


int main(){

  float v_inicial = 0, v_final = 0, juros = 0;
  int periodo = 0;

  printf("investimento inicial?");
  scanf("%f", &v_inicial);

  printf(" juros do periodo em decimais");
  scanf("%f", &juros);

  printf("quantos periodos inteiros o investimento ira render");
  scanf("%d", &periodo);
  
  int vezes = 0;
    for( vezes = 0; vezes < periodo; vezes++){
    
      v_final = v_inicial * (1 + juros);
      
      v_inicial = v_final;
      
      
      
  
    
    }

  
  printf(" o valor final: %.2f\n", v_final);
  
  return 0;
  

  
}





