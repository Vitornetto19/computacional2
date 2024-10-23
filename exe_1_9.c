/* mesmo erro da 7.

#include <math.h>
#include <stdio.h>



int main(){

  float a = 0, b = 0, c = 0;

  printf("\nqual e o a ");
  scanf("%f", &a);

  printf("\nqual e o b");
  scanf("%f", &b);

  printf("\nqual e o c");
  scanf("%f", &c);

  float delta = sqrtf(b * b - (4 * a * c));
  
  float raiz_1 = (b + delta) / (2 * a); 
  float raiz_2 = (b - delta) / (2 * a);
  
  printf("primeira raiz %f\n", raiz_1);
  
  printf("segunda raiz %f\n", raiz_2);
  
  return 0;
}  */

