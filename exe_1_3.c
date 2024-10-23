/* Leia dois n'umeros do teclado,
calcule a soma e ponha o resultado na tela.
*/ 

#include <stdio.h>

int main(){
  int num_1 = 0;
  int num_2 = 0;
  
  printf("\ninsira o primeiro numero inteiro\n");
  scanf("%d", &num_1);
  printf("\ninsira o segundo numero inteiro\n");
  scanf("%d", &num_2);
  
  printf("resultado da soma: %d", num_1 + num_2);
  
  return 0;



}
