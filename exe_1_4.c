/* Pergunte o nome do usuario e coloque
a mensagem "OI" seguida do nome dele.
*/


#include <stdio.h>

int main(){

  char name[50];
  
  printf("\nEcreva o seu nome");
  scanf("%s", name);
  
  printf("\nOi %s", name);
  
  return 0;

}
